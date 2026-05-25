class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 1;

        for(int i = 0; i < n; i++){
            if(ans == nums[i])  ans++;
            else if(ans < nums[i])  break;
        }
        return ans;
    }
};
