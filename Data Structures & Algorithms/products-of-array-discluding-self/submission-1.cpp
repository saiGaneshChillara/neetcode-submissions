class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        int zeros_count = 0;
        int prod = 1;

        for (auto& num : nums) {
            if (num != 0) prod *= num;
            else zeros_count++;
        }

        if (zeros_count > 1) return res;
        for (int i = 0; i < n; i++) {
            if (zeros_count > 0) {
                res[i] = (nums[i] == 0) ? prod : 0;
            } else {
                res[i] = prod / nums[i];
            }
        }

        return res;
    }
};
