class Solution {
public:
    bool is_feasible(vector<int>& nums, int maxSum, int k) {
        int count = 1;
        int currSum = 0;
        for (auto num : nums) {
            currSum += num;
            if (currSum > maxSum) {
                count++;
                currSum = num;
                if (count > k) return false;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (is_feasible(nums, mid, k)) {
                ans = mid;        
                high = mid - 1;
            } else {
                low = mid + 1;    
            }
        }
        return ans;
    }
};