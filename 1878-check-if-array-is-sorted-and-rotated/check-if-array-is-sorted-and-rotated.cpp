class Solution {
public:
    bool check(vector<int>& nums) {
        //we just need to check how many times the array is breaking the ascending order 
        //rule if its just once we can return true
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            //if decending hoga hum 1 krdenge count ko
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};