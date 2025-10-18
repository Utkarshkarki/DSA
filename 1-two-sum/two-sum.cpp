class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> mp; // stores number -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        // check if the complement exists in the map
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }

        // store the current number with its index
        mp[nums[i]] = i;
    }

    return {}; // return empty vector if no solution (though problem guarantees one)
}

        
    
};