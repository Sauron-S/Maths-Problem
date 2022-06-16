/*
Check given number is prime or not
*/

class Solution{
  public:
  bool IsPrime(int n){
    if(n<=1){
        return false;
    }
    
    bool isPrime = true;
    for(i=2;i*i<=n;i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    
    return isPrime;
  }
};
