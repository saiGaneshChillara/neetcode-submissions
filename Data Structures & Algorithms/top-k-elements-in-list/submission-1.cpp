class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (auto& num : nums) {
            freq[num]++;
        }

        vector<int> unique;

        for (const auto& pair : freq) {
            unique.push_back(pair.first);
        }

        sort(unique.begin(), unique.end(), [&](int a, int b) {
            return freq[a] > freq[b];
        });
        
        return {unique.begin(), unique.begin() + k};
    }
};
