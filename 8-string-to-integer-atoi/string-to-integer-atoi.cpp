class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        int sign = 1;
        long long ans = 0;

        // skip spaces
        while (i < n && s[i] == ' ')
            i++;

        // check sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        // convert digits
        while (i < n && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');

            // overflow check
            if (sign * ans > INT_MAX)
                return INT_MAX;
            if (sign * ans < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * ans;
    }
};