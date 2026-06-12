class Solution {
public:


void ans(int n,int cnt,int on,int cn,int i,vector<string>&ansss,string &s){
    

    if(i==2*n){
        ansss.push_back(s);
        return;

    }
     if(on!=0 && cnt==0){
        s.push_back('(');
        ans(n,cnt+1,on-1,cn,i+1,ansss,s);
        s.pop_back();

     }
     else if(on==0 && cnt!=0){
           s.push_back(')');
        ans(n,cnt-1,on,cn-1,i+1,ansss,s);
        s.pop_back();
     }
     else{

             s.push_back('(');
        ans(n,cnt+1,on-1,cn,i+1,ansss,s);
        s.pop_back();

          s.push_back(')');
        ans(n,cnt-1,on,cn-1,i+1,ansss,s);
        s.pop_back();

       
     }

}
    vector<string> generateParenthesis(int n) {
        vector<string>ansss;
        string s;

        ans(n,0,n,n,0,ansss,s);

        return ansss;


    }
};
