class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {

        long long dupli=mass;
        sort(asteroids.begin(),asteroids.end());

        for(auto it:asteroids){
            if(it>dupli){
                return false;
            }else{
                dupli+=it;
            }
        }
        return true;
        
    }
};