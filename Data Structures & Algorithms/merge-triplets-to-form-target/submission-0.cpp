class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int n=triplets.size();
        int maxi1=-1,maxi2=-1,maxi3=-1;

        for(int i=0;i<n;i++){
            if(triplets[i][0]<=target[0] && triplets[i][1]<=target[1]
            && triplets[i][2]<=target[2]){
maxi1=max(maxi1,triplets[i][0]);
maxi2=max(maxi2,triplets[i][1]);
maxi3=max(maxi3,triplets[i][2]);

            }

        }

        if(maxi1==target[0] && maxi2==target[1] && maxi3==target[2])return true;


        return false ;


    }
};
