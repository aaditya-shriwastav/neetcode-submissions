class Solution {
public:
    int compress(vector<char>& chars) {
       int n=chars.size();
     vector<char>s;
     int i=0,j=0;
     while(j<n && i<n)
{
    while(j<n && chars[i]==chars[j]){
        j++;

    }
    s.push_back(chars[i]);

    int x=j-i;
    int cnt=0;
    int siz=s.size()-1;
    if(x!=1){

    while(x!=0){
        int y=x%10;
        s.push_back(y+'0');

        cnt++;
        x=x/10;




    }
    
    reverse(s.begin()+siz+1,s.end());
    }
    i=j;



}  
chars=s;
return s.size();





    }
};