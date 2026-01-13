class Solution {
public:
    string frequencySort(string s) {
        int m=0;char c;
        string ans;
        int freq[256]={0};
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        while(ans.length()!= s.length()){
        for(int j=0;j<256;j++){
            if(m<freq[j]){
                m=freq[j];
                c=(char)j;
            } } if(m==0)break;
            for(int l=1;l<=m;l++){
                ans+= c;}
                 // can also write this ans += string(m, c), ans.append(m,c);
            freq[c]=0;
             m=0;
             ;} return ans;

           
        


        
    }
};