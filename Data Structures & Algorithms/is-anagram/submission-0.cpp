class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq1[26] = {};
        int freq2[26] = {};

        for (char ch : s) {
            freq1[ch - 'a']++;
        }

        for (char ch : t) {
            freq2[ch - 'a']++;
        }

        return equal(begin(freq1), end(freq1), begin(freq2));
    }
};
