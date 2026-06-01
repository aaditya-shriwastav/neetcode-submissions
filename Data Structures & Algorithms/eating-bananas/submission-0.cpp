class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
     
   
        int ans=0;

        int start=1,end=*max_element(piles.begin(),piles.end()) ;
        while(start<=end){
            int mid=(start+end)/2;
            long long cnt=0;

           
           for(int i=0;i<n;i++){
          cnt+=piles[i]/mid;
            if(piles[i]%mid)cnt++;

           }
           if(cnt>h){
            start=mid+1;

           }
           else{
            ans=mid;
end=mid-1;

           }


        }
        return ans;

    }
};
