class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int maxi=1e9;
        int ones=-1,twos=-1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) ones=i;
            else if(nums[i]==2) twos=i;

            if(ones!=-1 && twos!=-1) maxi=min(maxi,abs(ones-twos));
        }
        return maxi==1e9? -1 : maxi;
        
    }
};