class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            switch (nums[mid]) {
                case 0:
                    // Found a '0', swap it with the 'low' pointer
                    std::swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                    break;
                case 1:
                    // Found a '1', it's in the right place
                    mid++;
                    break;
                case 2:
                    // Found a '2', swap it with the 'high' pointer
                    std::swap(nums[mid], nums[high]);
                    high--;
                    
                    break;
            }
        }
    }
        
    
};