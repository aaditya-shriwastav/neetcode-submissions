class Solution {
public:
    int lengthOfLongestSubstring(string s) {
unordered_map<char,int>mp;
int n=s.size();
int i=0,j=0;
int maxi=0;

while(j<n && i<n){
    while(j<n && !mp[s[j]]){
        mp[s[j]]++;
        j++;
        maxi=max(maxi,j-i);



    }
    while(i<n && mp[s[j]]==1){
    mp[s[i]]--;
    i++;

    }


}
return maxi;

    }
};
