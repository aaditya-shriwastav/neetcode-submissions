class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        int i=0,j=n*m-1;
        int ans=0;
        bool bans=false;


        while(i<=j){
            int mid=(i+j)/2;

            int row=mid/m;
            int col=mid%m;

            if(target>matrix[row][col]){
                i=mid+1;


            }
           else if(target<matrix[row][col]){
            j=mid-1;

           }
           else{
bans=true;
break;

           }
        }
        return bans;

    }
};
