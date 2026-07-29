class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int maxi=0;
        int startind;

        for(int i=0;i<n;i++){

            int left=i,right=i;
            while(left>=0 && right<n && s[left]==s[right]){
if(maxi<abs(-left+right+1)){
    maxi=abs(-left+right+1);
    startind=left;

}
left--,right++;
            }
          
            
             left=i,right=i+1;
                        while(left>=0 && right<n && s[left]==s[right]){
if(maxi<abs(-left+right+1)){
    maxi=abs(-left+right+1);
    startind=left;

}
left--,right++;

        }
        }
        string ans;


        for(int i=startind;i<startind+maxi;i++){
ans.push_back(s[i]);

        }


        return ans;





        
    }
};
