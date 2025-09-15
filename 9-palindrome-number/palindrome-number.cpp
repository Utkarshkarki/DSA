class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int a = x;
       int reversed_num=0;
        while(a!=0){
            int pop=a%10;
            a=a/10;
            if (reversed_num > INT_MAX / 10 || (reversed_num == INT_MAX / 10 && pop > 7)) {
                return 0;
            }

            // Check for negative overflow before multiplication
            if (reversed_num < INT_MIN / 10 || (reversed_num == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            reversed_num = reversed_num * 10 + pop;
        }
        if (reversed_num == x){
            
            return true ;
            
        }else{
            return false ;

        }
    }
        
        
        
    
};