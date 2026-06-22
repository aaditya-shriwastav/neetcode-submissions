class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        string res;

        if(a>0)pq.push({a,'a'});
        if(b>0)pq.push({b,'b'});
        if(c>0)pq.push({c,'c'});

        while(!pq.empty()){
            int cnt=pq.top().first;
            char c=pq.top().second;
            pq.pop();

            if(res.size()>1 && res[res.size()-1]==c && res[res.size()-2]==c){
                if(pq.empty())break;
                int cnt2=pq.top().first;
                char c2 =pq .top().second;
                pq.pop();
                res+=c2;
                if(--cnt2>0)pq.push({cnt2,c2});
                pq.push({cnt,c});

            }
            else{
                res+=c;
                if(--cnt>0 )pq.push({cnt,c});

            }



            
        }
        return res;



    }
};