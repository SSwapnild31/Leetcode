class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int max_area = 0;
        int l = 0;
        int r = height.size() - 1;

        while(l < r){
            
            int width = r - l;
            int min_height = std::min(height[l], height[r]);
            
            int current_area = width * min_height;
            max_area = std::max(max_area, current_area);

            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return max_area;
    }
};
