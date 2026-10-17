class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end());
        int ans = 0;

        for (auto num: hash) {
            if (hash.contains(num - 1)) {
                continue;
            }
            int count = 1;
            while (hash.contains(num + 1)) {
                count++;
                num += 1;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};
