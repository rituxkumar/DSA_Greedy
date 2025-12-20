class Solution {
public:
    int maxOperations(string s) {
        int result = 0, i = 0, count1seen = 0;
        int n = s.size();

        while (i < n) {
            if (s[i] == '0') {
                result = result + count1seen;
                while (i < n && s[i] == '0')
                    i++;
            } else {
                count1seen++;
                i++;
            }
        }
        return result;
    }
};