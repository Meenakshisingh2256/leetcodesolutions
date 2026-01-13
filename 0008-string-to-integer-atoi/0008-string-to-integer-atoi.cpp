class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int c = 1;
        int num = 0;
        int digit = 0;

        // 1. Skip leading spaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // 2. Read sign
        if (i < s.length() && s[i] == '+') {
            c = 1;
            i++;
        } else if (i < s.length() && s[i] == '-') {
            c = -1;
            i++;
        }

        // 3. First character must be a digit
        if (i >= s.length() || s[i] < '0' || s[i] > '9') {
            return 0;
        }

        // 4. Read digits
        for (int j = i; j < s.length(); j++) {

            // stop if not a digit
            if (s[j] < '0' || s[j] > '9') {
                break;
            }

            digit = s[j] - '0';

            // 5. Overflow check BEFORE updating
            if (num > (INT_MAX - digit) / 10) {
                return (c == 1) ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
        }

        // 6. Apply sign
        num = c * num;
        return num;
    }
};
