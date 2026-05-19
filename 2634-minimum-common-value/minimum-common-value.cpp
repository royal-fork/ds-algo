class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int common=-1;
        int lp=0;
        int rp=0;

        while(lp<nums1.size() && rp<nums2.size()){
            if(nums1[lp]==nums2[rp]){
                common=nums1[lp];
                return common;

            }else if(nums1[lp]>nums2[rp]){
                rp++;
            }else{
                lp++;
            }
        }
        return common;
        
    }
};