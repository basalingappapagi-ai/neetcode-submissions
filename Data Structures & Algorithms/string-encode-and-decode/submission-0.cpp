class Solution {
public:

        string encode(vector<string>& strs) {
        string result = "";

        for (string word : strs) {
            for (int i = 0; i < word.size(); i++) {
                word[i] = char(int(word[i]) + 1);
            }
            result += word + '|';   // join into one string
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '|') {
                strs.push_back(temp);
                temp = "";
            } else {
                temp += char(int(s[i]) - 1);
            }
        }

        return strs;
    }
};
