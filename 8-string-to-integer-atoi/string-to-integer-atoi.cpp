class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        int n=s.size();
        //remove unwanted extra spaces
        while(i<n && s[i]==' '){
            i++;
        }
        //check for sign now nigga
        if(s[i]=='+'){
            i++;
        }else if(s[i]=='-'){
            sign=-1;
            i++;
        }
        //ab numeric data aayega
        long long num=0;
        while(i<n && isdigit(s[i])){
            num=num*10+(s[i]-'0');
            i++;
                 if(num*sign>INT_MAX) return INT_MAX;
                if(num*sign<INT_MIN) return INT_MIN;

        }
        return (int)(num*sign) ;
       
        
    }
    
};