class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int countOf1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                countOf1++;
        }
        if (countOf1 > 0) {
            return n - countOf1;
        }

        int minStepTo1 = INT_MAX;
        for (int i = 0; i < n; i++) {
            int GCD = nums[i];
            for (int j = i + 1; j< n ; j++) {
                GCD = gcd(GCD, nums[j]);

                if (GCD == 1) {
                    minStepTo1 = min(minStepTo1, j - i);
                    break;
                }
            }
        }
        if (minStepTo1 == INT_MAX) { return -1; }
        return minStepTo1 + (n - 1);
    }
};