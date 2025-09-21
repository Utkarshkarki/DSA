class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;  // count of places where the order is violated
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        
        // The array is sorted and rotated if there is at most 1 violation
        return count <= 1;
    }
        
    
};