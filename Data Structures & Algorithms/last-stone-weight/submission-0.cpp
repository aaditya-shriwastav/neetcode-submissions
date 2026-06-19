class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(stones[i]);

        }
        while(pq.size()>1){
            int last=pq.top();
            pq.pop();
            int slast=pq .top();
            pq.pop();
            if(last!=slast){
                pq .push(last-slast);

            }

        }
        if(pq.empty())return 0;

        return pq .top();


    }
};
