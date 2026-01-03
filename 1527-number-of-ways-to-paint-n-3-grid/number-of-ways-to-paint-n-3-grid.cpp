class Solution {
public:
    int numOfWays(int n) {
        const int MOD=1e9+7;
        long long diff=6,same=6;
        for(int i=2;i<=n;i++){
            long long new_diff=(diff*2+same*2)%MOD;
            long long new_same=(diff*2+same*3)%MOD;

            diff=new_diff;
            same=new_same;

        }
        return (int)((same+diff)%MOD);


        
    }
};