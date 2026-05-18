class Solution {
public:
    string decodeString(string s) {
        int n=s.size();
        stack<char>st;
        int i=0;
        while(i<n){
        string t;
        



        while(!st.empty() && s[i]==']' && st.top()!='['){
            t.push_back(st.top());
            st.pop();
        }
        if(s[i]==']'){
        st.pop();
        int x=1;
        int y=0;

      while(!st.empty() && st.top()>='0' && st.top()<='9'){
y=y+x*(st.top()-'0');
x=x*10;
st.pop();

      }
      

    while(y--){

        for(int j=t.size()-1;j>=0;j--){
            st.push(t[j]);

        }
        

    }
        }
if(s[i]!=']'){
    st.push(s[i]);

}
    i++;

    
        

      
         


        } 
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();

        }
        reverse(ans.begin(),ans.end());

        return ans;


    }
};