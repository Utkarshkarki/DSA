class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
                sort(nums.begin(), nums.end());
        long long l = 0, total = 0, res = 1;

        for (long long r = 0; r < nums.size(); r++) {
            total += nums[r];

            // While condition not satisfied, shrink window
            while ((long long)nums[r] * (r - l + 1) > total + k) {
                total -= nums[l];
                l++;
            }

            res = max(res, r - l + 1);
        }
        return res;
        
    }
};