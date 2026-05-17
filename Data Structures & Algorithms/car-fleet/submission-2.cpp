class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
      int n=position.size();

vector<pair<int,double>>p(n);
for(int i=0;i<n;i++){
 
double time=(double)(target-position[i])/speed[i];

p[i]={position[i],time};

}

sort(p.begin(), p.end(), greater<pair<int,double>>());

stack<double>st;
int i=0;
int cnt=0;

while(i<n){
    while(!st.empty() && p[i].second>st.top()){
    
   st.pop();



    }
    if(st.empty()){
        
cnt++;

    }
st.push(p[i].second);


   i++;

}
return cnt;

     

    }
};
