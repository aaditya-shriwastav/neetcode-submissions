class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m)return false;


        vector<int>mp1(26),mp2(26);
        for(int i=0;i<n;i++){
            mp1[s1[i]-'a']++;
            mp2[s2[i]-'a']++;


        }
        

        int i=0,j=n-1;
        while(j<m)
{
   if(mp1==mp2){
    return true;

   }
   mp2[s2[i]-'a']--;
   if(j+1<m)
   mp2[s2[j+1]-'a']++;
   i++,j++;




}
return false;

    }
};
