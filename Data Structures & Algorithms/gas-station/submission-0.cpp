class Solution {
public:
bool ans(vector<int>&gas,vector<int>&cost,int n,int ind,int cst,vector<bool>visi){
int cnt=0;

for(int i=0;i<n;i++){
if(visi[i]==1){
cnt++;

}
}
if(cnt==n)return true;



if(cst-cost[(ind)%n]>=0 && visi[(ind%n)]==0){
    visi[ind%n]=1;
   if(ans(gas,cost,n,ind+1,cst-cost[(ind)%n]+gas[(ind+1)%n],visi))return true;
   visi[ind%n]=0;


}


return false;


}
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=cost.size();
        vector<bool>visi(n,0);


        for(int i=0;i<n;i++){
if(ans(gas,cost,n,i,gas[i],visi))return i;


        }

        return -1 ;


    }
};
