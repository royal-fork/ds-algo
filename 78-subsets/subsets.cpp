class Solution {
public:
    vector<vector<int>> res;
    void solver(int i,vector<int>& nums,vector<int>& temp){
        if(i>=nums.size()){
            res.push_back(temp);
            return;
        }
        //add ith element aur aage badha do i ko
        temp.push_back(nums[i]);
        solver(i+1,nums,temp);

       //bina add kre ith element ko i ko aage badha do
        temp.pop_back();
        solver(i+1,nums,temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp; //subsets rakh lo 
        solver(0,nums,temp);
        return res;
        
    }
};