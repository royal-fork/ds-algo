class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> arr;

        for (auto &row : grid) {
            for (int val : row) {
                arr.push_back(val);
            }
        }
        //same modulo class pta lgao
        int base = arr[0];
        for (int val : arr) {
            if ((val - base) % x != 0) return -1;
        }
        //normalizee
         for (int &val : arr) {
            val /= x;
        }
        //sort krke median
         sort(arr.begin(), arr.end());
        int median = arr[arr.size() / 2];

         int ops = 0;
        for (int val : arr) {
            ops += abs(val - median);
        }

        return ops;

        
    }
};