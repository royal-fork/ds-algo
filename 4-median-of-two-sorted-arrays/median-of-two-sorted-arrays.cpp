
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res = nums1;
        res.insert(res.end(), nums2.begin(), nums2.end());
        sort(res.begin(),res.end());

        // for (int x : res) cout << x << " ";
        // cout << endl;
        double result;

       if(res.size()%2==0){

        result=(res[res.size()/2.00]+res[(res.size()/2.00)-1.00])/2.00;

       }else{
        result=res[res.size()/2];
       }


        return result;   
    }
};
