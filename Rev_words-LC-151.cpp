// LeetCode Problem #151 Reverse Words in a Stringk (0 ms)
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string s1 = "";
        string c = "";
        s = " " + s;
        int l = 0;
        for (int i = n; i >= 0; i--) {
            l++;
            if (s[i] == 32) {
                c = s.substr(i, l);
                if (c == " ") {
                    l = 0;
                } else {
                    s1 += c;
                }
                l = 0;
            }
        }
        s1.erase(0,1);
        return s1;
    }
};
