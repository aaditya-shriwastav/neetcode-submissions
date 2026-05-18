class Solution {
public:
void nxtse(vector<int>heights,int n,vector<int>&nse){
    stack<int>st;
    int i=n-1;
    while(i>=0){
        while(!st.empty() && heights[st.top()]>=heights[i]){

            st.pop();

        }
        if(st.empty()){
            nse[i]=n;

        }
        else{
       nse[i]=st.top();
        }
       st.push(i);


       i--;

    }
}
    void prese(vector<int>heights,int n,vector<int>&pse){
    stack<int>st;
    int i=0;
    while(i<n){
        while(!st.empty() && heights[st.top()]>=heights[i]){

            st.pop();

        }
        if(st.empty()){
            pse[i]=-1;

        }
        else{
       pse[i]=st.top();
        }
       st.push(i);


       i++;

    }

}
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>nse(n),pse(n);
        nxtse(heights,n,nse);
        prese(heights,n,pse);
        int maxi=-1;
        for(int i=0;i<n;i++){
cout<<nse[i]<<" ";

        }
        cout<<endl;
         for(int i=0;i<n;i++){
cout<<pse[i]<<" ";

        }
        cout<<endl;

        for(int i=0;i<n;i++){
maxi=max(maxi,(nse[i]-pse[i]-1)*heights[i]);

        }
        return maxi;



    

    }
};
