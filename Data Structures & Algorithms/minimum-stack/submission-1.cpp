class MinStack {
public:
stack<int>st;
stack<int>minst;

    MinStack() {
       


     
    }
    
    void push(int val) {
   
       st.push(val);
       if(!minst.empty()){
        
       if(minst.top()>=val){
        minst.push(val);
        
       }
       }
       else{
         minst.push(val);
       }


        
            
        
    }
    
    void pop() {
   if(st.top()==minst.top()){
minst.pop();

   }
   st.pop();


      

        
    }
    
    int top() {
      return st.top();

    }
    
    int getMin() {
        
       return minst.top();

        
    }
};
