class Solution {
public:

    bool canReach(string s, int minJump, int maxJump) {
        int n=s.size();


        queue<int>q;
        vector<int>visited(n,0);
        visited[0]=1;

        q.push(0);


        while(!q.empty()){
            int i=q.front();
            q.pop();
            int start=i+minJump;

            for(int x=start;x<min(i+maxJump+1,n);x++){
                if(s[x]=='0' && !visited[x]){
                    q.push(x);
                    visited[x]=1;
                    
                    if(x==n-1)return true;

                }
            }

        }

        return false;




      
      


        
    }
};