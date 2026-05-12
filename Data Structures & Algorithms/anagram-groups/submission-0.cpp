class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();

        vector<string>st(n);
        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            st[i]=s;

           


        }
        map<string,vector<int>>mp;
        for(int i=0;i<n;i++){
mp[st[i]].push_back(i);

        }

     

        for(auto it:mp){
        
vector<string>v;
            for(int i=0;i<it.second.size();i++){
            v.push_back(strs[it.second[i]]);

            }
            ans.push_back(v);


        }
        return ans;



    }
};
