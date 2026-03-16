class Solution {
public:
    bool helper(char c){
         string vowels = "aeiouAEIOU";
        return vowels.find(c)== string::npos;
    }
    string reverseVowels(string s) {
        string word=s;
        int lp=0;
        int rp=s.size()-1;
        while(lp<rp){
            while(lp<rp && helper(word[lp])){
                lp++;
            }
            while(lp<rp && helper(word[rp])){
                rp--;
            }
            swap(word[lp],word[rp]);

            lp++;
            rp--;


        }
        return word;
        
    }
};