class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {

        int n=matrix.size();
        int m=matrix[0].size();
        set<pair<int,int>>st;

        
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    st.insert({i,j});

                }


            }
            }



        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(st.find({i,j})!=st.end()){
                    
                 for(int x=0;x<n;x++){
                    matrix[x][j]=0;

                 }
                 for(int x=0;x<m;x++){
                    matrix[i][x]=0;
                    
                 }

                }
            }
        }        
    }
};
