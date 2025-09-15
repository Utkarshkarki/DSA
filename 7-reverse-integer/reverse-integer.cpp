class Solution {
public:
    int reverse(int x) {
       
        int reversed_num = 0;

        while (x != 0) {
            int pop = x % 10;
            x /= 10;

            // Check for positive overflow before multiplication
            if (reversed_num > INT_MAX / 10 || (reversed_num == INT_MAX / 10 && pop > 7)) {
                return 0;
            }

            // Check for negative overflow before multiplication
            if (reversed_num < INT_MIN / 10 || (reversed_num == INT_MIN / 10 && pop < -8)) {
                return 0;
            }

            // If no overflow, push the digit
            reversed_num = reversed_num * 10 + pop;
        }

        return reversed_num;
    }
};
        
   