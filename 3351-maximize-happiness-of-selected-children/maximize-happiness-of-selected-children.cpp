class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(begin(happiness), end(happiness), greater<int>());
        long long result = 0;
        int temp = 0;
        for (int i = 0; i < k; i++) {
            result += max(happiness[i] - temp, 0);
            temp++;
        }
        return result;
    }
};