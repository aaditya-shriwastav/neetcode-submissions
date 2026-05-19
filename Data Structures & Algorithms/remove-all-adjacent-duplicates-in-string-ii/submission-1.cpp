class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>>st;
        int i=0;
        while(i<n){
            if(!st.empty() && st.top().second==k){
                int x=k;
                while(!st.empty() && x--){
                    st.pop();
                }
            }
            if(st.empty()){
                st.push({s[i],1});
            }
            else{
                if(s[i]==st.top().first){
                    st.push({s[i],st.top().second+1});
                }
                else{
                    st.push({s[i],1});
                }
            }
            i++;

        }
        if(!st.empty() && st.top().second==k){
            int y=k;

while(!st.empty() && y--){
    st.pop();
    
}
        }
        string s1;
        while(!st.empty()){
            s1.push_back(st.top().first);
            st.pop();

        }
        reverse(s1.begin(),s1.end());
        return s1;




    }
};