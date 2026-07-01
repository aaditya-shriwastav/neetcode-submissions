class Solution {
public:
bool yesno(vector<int>&mp1,vector<int>mp2){
    for(int i=0;i<26;i++){
        if(mp1[i]!=mp2[i] && mp2[i]!=0){
            return false;

        }
    }
    return true;

}
    vector<int> partitionLabels(string s) {


        int n=s.size();
        vector<int>ans;
        vector<int>mp1(26),mp2(26);


        for(int i=0;i<n;i++){
mp1[s[i]-'a']++;


        }
        int prev=-1;

          for(int i=0;i<n;i++){
mp2[s[i]-'a']++;
if(yesno(mp1,mp2)){
    ans.push_back(i-prev);
    prev=i;

}


        }

        return ans;


        
    }
};
