class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        vector<int>visited(n);
        int cnt=0;

        priority_queue<pair<int,char>>pq;
        vector<int>store(26);
        for(int i=0;i<n;i++){
            store[s[i]-'a']++;

        }
        int maxi=0 ;
        string ans=s;
        for(int i=0;i<26;i++){
            if(store[i])
            pq.push({store[i],i+'a'});

            maxi=max(maxi,store[i]);


        }
       if(maxi>(n+1)/2)return "";
       

        int i=0;

        while(cnt<n){
      
            int fre=pq.top().first;
            char c=pq.top().second;
            pq.pop();


            while(fre--){
                      while(visited[i]!=0){
                i=(i+1)%n;


            }
            ans[i]=c;
            visited[i]=1;
            cnt++;

            i=(i+2)%n;


            


            }



        }
        return ans;

 


      
       


    }
};