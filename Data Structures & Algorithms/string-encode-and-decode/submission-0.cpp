class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (const auto& str : strs) {
            res += to_string(str.size());
            res += "#";
            res += str;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while (i < s.size()) {
            string num;
            while (isdigit(s[i])) {
                num += s[i++];
            }
            i++;
            int len = stoi(num);
            res.push_back(s.substr(i, len));
            i += len;
        }

        return res;
    }
};
