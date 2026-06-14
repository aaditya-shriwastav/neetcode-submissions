class Solution {
public:

void ans(string digits,map<char,string>&mp,string &dans,vector<string>&ansss,int ind){

string ds=mp[digits[ind]];
if(ind==digits.size()){
    ansss.push_back(dans);
    return;

}

for(int i=0;i<ds.size();i++){
    dans.push_back(ds[i]);
    ans(digits,mp,dans,ansss,ind+1);
    dans.pop_back();
}


}

    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        map<char,string>mp;
        for(int i=0;i<n;i++){
 mp['2'] = "abc";
mp['3'] = "def";
mp['4'] = "ghi";
mp['5'] = "jkl";
mp['6'] = "mno";
mp['7'] = "pqrs";
mp['8'] = "tuv";
mp['9'] = "wxyz";

        }
        string dans;
        vector<string>ansss;
        if(digits.size()==0)return ansss;
        

        ans(digits,mp,dans,ansss,0);

        return ansss;


        
    }
};
