class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lp=0;
        int rp=numbers.size()-1;

        while(rp>lp){
            int sum=numbers[lp]+numbers[rp];

            if(sum==target){
                return {lp+1,rp+1};
            }
            else if(sum>target){
                rp--;
            }else{
                lp++;
            }
        }
        return {-1,-1};
        
    }
};