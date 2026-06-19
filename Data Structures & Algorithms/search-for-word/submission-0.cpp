class Solution {
public:
bool dfs(vector<vector<char>>& board,int row,int col,int ind,string word,vector<vector<int>>&visited){


if(ind==word.size()){
  return true;
}

if(row<0 || row>=board.size() || col<0 || col>=board[0].size() || board[row][col]!=word[ind] || visited[row][col]){
    return false;
}
bool up=false,down=false,right=false,left=false;

visited[row][col]=1;

     right=dfs(board,row,col-1,ind+1,word,visited);
     left=dfs(board,row,col+1,ind+1,word,visited);
     up=dfs(board,row-1,col,ind+1,word,visited);
     down=dfs(board,row+1,col,ind+1,word,visited);

     visited[row][col]=0;



     return right|left|up|down;



}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        vector<vector<int>>visited(n,vector<int>(board[0].size(),0));


        for(int i=0;i<n;i++){
            for(int j=0;j<board[0].size();j++){
         if(dfs(board,i,j,0,word,visited))return true;

            }
        }
        return false ;



        
    }
};
