class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
    for(int i = n - 1; i >= 0; i--){
        if(digits[i] != 9){//9 nahi hai toh sidha +1 krke return
            digits[i]++;
            return digits;
        }
        digits[i] = 0;//agar 9 hai toh zero krke loop continue
    }
    
    digits.insert(digits.begin(), 1);//sb mei 9 9 9 the  surauwat mei 1 
    
    return digits;
}
        
    
};