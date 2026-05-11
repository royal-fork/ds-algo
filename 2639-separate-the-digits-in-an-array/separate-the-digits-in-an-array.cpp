class Solution {
public:
    void helper(vector<int>& ans,int num){

        

    string s = to_string(num);
    for(auto it:s){
        ans.push_back(it - '0');
    }


    }
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            helper(ans,nums[i]);


        }
        return ans;
        
    }
};