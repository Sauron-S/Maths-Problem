/*
Prime factors
*/

class Solution{
    std::set<int> PrimeFactors(int n){
        std::set<int> factor;
        for(int i=2;i*i <=n;i++){
            while(n%i == 0){
                factors.insert(i);
                n = n/i;
            }
        }
      
        if(n>1){
            factors.insert(n);
        }
      
        return factor;
    }
}
