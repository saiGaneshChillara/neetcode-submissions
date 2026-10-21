class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        auto it = max_element(piles.begin(), piles.end());

        int maximum = *it;

        int low = 1, high = maximum, ans = maximum;

        while (low < high) {
            int mid = low + (high - low) / 2;

            int time = 0;
            for (auto& pile: piles) {
                time += (pile + mid - 1) / mid;
            }

            if (time <= h) {
                high = mid;
                ans = mid;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};