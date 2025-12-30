class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, j;
        int len = nums.size();
        for(i = 0,j = len - 1 ; i <= j ; i++){
            if(nums[i] == val){
                swap(nums[i],nums[j]);
                i--;
                j--;
            }
        }
        return j+1;
    }
};
