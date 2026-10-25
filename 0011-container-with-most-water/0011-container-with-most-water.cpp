class Solution {
public:
    int maxArea(vector<int>& height) {
        int areas = 0 ;
        int i = 0;
        int left = 0 ;
        int right = height.size() - 1;
        while(left < right){
            areas =max(areas,(height[left]>height[right] ? height[right]*(right-left) : height[left]*(right-left))) ;
            if(height[left] < height[right]) left++;
            else right-- ;

        }
        return areas;
    }
};