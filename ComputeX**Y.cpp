/*
Compute X**Y in O(log(Y))
*/

class Solution{
public:
    long long Compute(int x,int y){
        long long res = 1;
        while(y){
            if(y%2 == 1){
                res = res * x;
            }
            
            x = x*x;
            y = y/2;
        }
      
      return res;
    }
};
