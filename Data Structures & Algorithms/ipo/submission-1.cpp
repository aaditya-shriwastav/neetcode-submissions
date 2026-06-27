class Solution {
public:


    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
int n=capital.size();

        vector<pair<int,int>>capaci(capital.size());

        for(int i=0;i<capital.size();i++){
            capaci[i]={capital[i],profits[i]};

        }

        sort(capaci.begin(),capaci.end());

        priority_queue<int>pq;

       int i=0;
       while(k>0){

        while(i<n && w>=capaci[i].first){
            pq.push(capaci[i].second);
            i++;

        }
        if(pq.empty())break;
        
        if(!pq.empty() && k>0){
            w+=pq.top();
            pq.pop();
            k--;

        }
       }


while(k-- && !pq.empty()){
    w+=pq.top();
    pq.pop();

}


    


     return w;




    }
};