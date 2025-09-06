class Solution {
public:
    void solver(int& x,long long& res){
        while(x!=0){
            int digit=x%10;
            res=res*10+digit;
            x=x/10;

        }
    }

    int reverse(int x) {
        long long res=0;
         solver(x,res);
          if (res > INT_MAX || res < INT_MIN) {
            return 0;
          }
         return (int)res;
        
    }
};