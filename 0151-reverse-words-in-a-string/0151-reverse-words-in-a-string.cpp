class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i = s.length() - 1;

        while (i >= 0) {

            // 1. Skip spaces
            while (i >= 0 && s[i] == ' ')
                i--;

            if (i < 0) break;

            // 2. Mark end of word
            int end = i;

            // 3. Find start of word
            while (i >= 0 && s[i] != ' ')
                i--;

            int start = i + 1;

            // 4. Append word
            if (!result.empty())
                result += " ";

            result += s.substr(start, end - start + 1);
        }

        return result;
    }
};


     
        
        
  