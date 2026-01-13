class Solution {
public:
    int maxDepth(string s) {
        char ch;
        int j=0;int depth=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                j++;
                depth=max(j,depth);}
        else if(s[i]==')'){
            j--;

        }    
        }return depth;
        
    }
};