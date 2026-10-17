class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result_set;

        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n - 1;
            int target = 0 - nums[i];

            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum == target) {
                    vector<int> inner = {nums[i], nums[left], nums[right]};
                    sort(inner.begin(), inner.end());
                    result_set.insert(inner);
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return vector<vector<int>>(result_set.begin(), result_set.end());
    }
};
