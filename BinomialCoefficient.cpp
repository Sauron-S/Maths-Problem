/*
Find NCR through Pascals Traingle
*/

class Solution{
    int BinomialCoefficient(int N, int r){
        std::vector<std::vector<int>> pascalsTriangle;
        pascalsTriangle.push_back(std::vector<int>({1}));
        for(int i=1;i<=N;i++){
            std::vector<int> row(i+1,0);
            row[i][0] =1;row[i][i] =1;
            for(int j=1;j<i;j++){
                row[i][j] = row[i-1][j-1]+row[i-1][j];
            }
            
            pascalsTriangle.push_back(std::move(row));
       }
       
       return  pascalsTriangle[N][r];
    }
}
