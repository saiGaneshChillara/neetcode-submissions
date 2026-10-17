class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result_set;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            unordered_set<int> hash;
            for (int j = i + 1; j < n; j++) {
                int target = 0 - (nums[i] + nums[j]);
                if (hash.contains(target)) {
                    vector<int> inner = {nums[i], nums[j], target };
                    sort(inner.begin(), inner.end());
                    result_set.insert(inner);
                }
                hash.insert(nums[j]);
            }
        }

        return vector<vector<int>>(result_set.begin(), result_set.end());
    }
};
