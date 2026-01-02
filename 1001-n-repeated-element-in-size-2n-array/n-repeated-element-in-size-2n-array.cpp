class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>st;
        int ans=0;

        for(auto it:nums){
            if(st.find(it)==st.end()){
                st.insert(it);

            }else{
                ans=it;
            }

        }
        return ans;
        
    }
};