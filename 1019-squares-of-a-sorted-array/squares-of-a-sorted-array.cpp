class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> pos;
        vector<int> neg;

        for(auto it : nums){
            if(it < 0)
                neg.push_back(it * it);
            else
                pos.push_back(it * it);
        }

        reverse(neg.begin(), neg.end());

        int i = 0, j = 0;
        vector<int> arr;

        while(i < pos.size() && j < neg.size()){
            if(pos[i] < neg[j])
                arr.push_back(pos[i++]);
            else
                arr.push_back(neg[j++]);
        }

        while(i < pos.size()) arr.push_back(pos[i++]);
        while(j < neg.size()) arr.push_back(neg[j++]);

        return arr;
    }
};