class Solution {
public:
    int beautySum(string s) {
        int beauty = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int freq[26] = {0};

            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int small = INT_MAX;
                int large = 0;

                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        large = max(large, freq[k]);
                        small = min(small, freq[k]);
                    }
                }
                beauty += (large - small);
            }
        }
        return beauty;
    }
};
