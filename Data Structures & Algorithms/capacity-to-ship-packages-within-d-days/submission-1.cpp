class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int start=*max_element(weights.begin(),weights.end());
        int end=0;
        int ans=0;


        for(int i=0;i<n;i++){
end+=weights[i];
        }
        while(start<=end){
            int mid=(start+end)/2;
            int cnt=0;
            int a=0;


            for(int i=0;i<n-1;i++){
cnt+=weights[i];
if(cnt+weights[i+1]>mid){
a++;
cnt=0;

}
            }
            a++;

            if(a>days){
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