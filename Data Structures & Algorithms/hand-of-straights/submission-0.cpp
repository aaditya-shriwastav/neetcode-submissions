class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize)return false;
        multiset<int>st;
        for(int i=0;i<n;i++){
st.insert(hand[i]);

        }
        while(!st.empty()){
int maxi=*prev(st.end());

int k=groupSize;


while(st.find(maxi)!=st.end() && k>0){
    auto it=st.find(maxi);
    st.erase(it);
    k--;
    maxi--;
}
if(k)return false ;




        }

        return true;
        



    }
};
