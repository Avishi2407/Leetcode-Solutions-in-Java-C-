class Solution {
public:
    string largestOddNumber(string num) {
     int n = num.length();
    for (int i = n - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 != 0) { 
// (num[i] - '0') is done to convert ascii value to integer for calculation as in string these charcters have ascii value so for example 5 ascii value is 53 and 0 ascii value is 48 so 53-48 = 5 which gives number 
            return num.substr(0, i + 1);
        }
    }
    return "";
    }
};