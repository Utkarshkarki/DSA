class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int sum1=accumulate(nums.begin(),nums.end(),0);
        int missingnums=sum-sum1;
     return missingnums ;   
    }
    
};