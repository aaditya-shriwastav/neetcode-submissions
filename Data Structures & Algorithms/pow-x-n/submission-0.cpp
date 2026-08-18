class Solution {
public:

double ans(double x,int n){
      if(n==0){
return 1;
        }
        double ans=1;

        
        if(n%2==0){
            x=x*x;

           ans=myPow(x,n/2);

        }
        else{
            

           ans=x*myPow(x,n-1);


        }


        return ans;


        
}

    double myPow(double x, int n) {
        if(n<0){
            n=-n;
            double anss;
            anss=ans(x,n);
            return 1.0/anss;

        }

        return ans(x,n);
        
      

        
    }
};
