class Solution {
public:
bool ispalin(string s){
    int i=0,j=s.size()-1;
    while(i<=j){
        if(s[i]!=s[j])return false;
        i++,j--;

    }
    return true;

}

void ans(string s,int ind,vector<vector<string>>&ansss,vector<string>&dans){

    if(ind==s.size()){
        ansss.push_back(dans);
        return;

    }

 for (int i = ind; i < s.size(); i++) {

            string temp = s.substr(ind, i - ind + 1);

            if (ispalin(temp)) {
                dans.push_back(temp);

                ans(s, i + 1, ansss, dans);

                dans.pop_back();
            }
        }
}
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>>ansss;
        vector<string>dans;

        ans(s,0,ansss,dans);
        return ansss;


        
        
    }
};
