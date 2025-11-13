class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        while (i < n && s[i] == ' ') {
            i++;
        }
        int sign = 1;
        if (i < n && s[i] == '+') {
            i++;
        } else if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        int result = 0;
        int limit = INT_MAX / 10; 
        
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (result > limit || (result == limit && digit > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            result = result * 10 + digit;
            i++;
        }
        return result * sign;
    }
};