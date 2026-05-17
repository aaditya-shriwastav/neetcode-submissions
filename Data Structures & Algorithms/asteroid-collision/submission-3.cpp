class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       int n= asteroids.size();
       stack<int>st;

       int i=0;
       while(i<n){

        bool x=false;

    while(!st.empty() && asteroids[i]<0 && 
    abs(asteroids[i])>=st.top() && st.top()>0){
        if(abs(asteroids[i])==st.top()){
            x=true;
            st.pop();
            break;

        }
        st.pop();

    }
    if(x){
        i++;
        continue;

    }

    if(st.empty()){
        st.push(asteroids[i]);

    }
    else{
        if(st.top()<0 || asteroids[i]>0){
            st.push(asteroids[i]);

        }
     


    }
    i++;
    
       }

       vector<int>ans;
       while(!st.empty()){
ans.push_back(st.top());
st.pop();

       }
       reverse(ans.begin(),ans.end());

       return ans;


     
    }
};