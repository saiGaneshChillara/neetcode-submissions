class Solution {
public:
    int findMin(vector<int> &nums) {
        int currentMin = INT_MAX;

        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[low] <= nums[mid]) {
                currentMin = min(currentMin, nums[low]);
                low = mid + 1;
            } else {
                currentMin = min(currentMin, nums[mid]);
                high = mid - 1;
            }
        }
        return currentMin;
    }
};
