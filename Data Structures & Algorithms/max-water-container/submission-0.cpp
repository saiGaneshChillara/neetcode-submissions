class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maximumArea = 0;
        int left = 0, right = heights.size() - 1;

        while (left < right) {
            int area = min(heights[left], heights[right]) * (right - left);
            maximumArea = max(area, maximumArea);
            if (heights[left] <= heights[right]) left++;
            else right--;
        }

        return maximumArea;
    }
};
