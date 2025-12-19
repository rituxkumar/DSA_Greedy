class Solution {
public:
    int partitionString(string s) {
        int count = 0;
        int currSubStr = 0;
        int n= s.size();
        vector<int> lastSeen(26, -1);

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if (lastSeen[ch - 'a'] >= currSubStr) {
                count++;
                currSubStr = i;
            }
            lastSeen[ch - 'a'] = i;
        }
        return count = count + 1;
    }
};