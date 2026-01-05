class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        long long minimum=INT_MAX;
        int neg=0;
        for(auto it: matrix){
            for(auto r : it){
                if(r<0)neg++;
                sum+=abs(r);
                minimum=min(minimum,(long long)abs(r));
            }
        }

        if(neg%2){
            sum-=2*minimum;
        }
        return sum;

        
    }
};