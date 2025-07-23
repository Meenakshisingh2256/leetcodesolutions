class Solution {
public:
    string makeFancyString(string s) {
        int count = 1;
        string t;
        t += s[0]; 

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1;
            }

            if (count <= 2) {
                t += s[i];
            }
        }

        return t;
    }
};
