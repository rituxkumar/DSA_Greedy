class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int MAX = arrays[0].front();
        int MIN = arrays[0].back();

        int result = 0;
        int n = arrays.size();

        for (int i = 0; i < n; i++) {
            int currMin = arrays[i].front();
            int currMax = arrays[i].back();

            result = max({result, abs(currMin - MAX), abs(currMax - MIN)});

            MAX = max(MAX, currMax);
            MIN = min(MIN, currMin);
        }
        return result;
    }
};