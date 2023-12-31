class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
       int count = -1;

        for (int i = 0; i < s.length() - 1; i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    // Update count if the substring length between equal characters is greater
                    count = max(count, j - i - 1);
                }
            }
        }

        return count;
    }
};