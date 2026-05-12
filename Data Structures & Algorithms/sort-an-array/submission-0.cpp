class Solution {
public:

vector<int>dummyans(int st1,int st2,vector<int>&x,vector<int>&y){
    vector<int>dans;

    while(st1<x.size() && st2<y.size()){
        if(x[st1]>=y[st2]){
dans.push_back(y[st2]);
st2++;

        }
        else{
            dans.push_back(x[st1]);
            st1++;


        }


    }
    if(st1==x.size()){
        for(int i=st2;i<y.size();i++){
            dans.push_back(y[i]);

        }
    }
     if(st2==y.size()){
        for(int i=st1;i<x.size();i++){
            dans.push_back(x[i]);
            
        }
    }
    return dans;

}
vector<int>ans(int start,int end,vector<int>&num){

if(start==end){
    return {num[start]};

}
int mid=(start+end)/2;
    vector<int>left=ans(start,mid,num);
    vector<int>right=ans(mid+1,end,num);

    vector<int>anss=dummyans(0,0,left,right);


    return anss;





}

    vector<int> sortArray(vector<int>& nums) {
      return ans(0,nums.size()-1,nums);
        
    }
};