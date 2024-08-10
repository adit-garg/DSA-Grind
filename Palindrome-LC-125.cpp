// LeetCode Problem Number #125 Valid Palindrome (3 ms)

class Solution {
public:
    string normalizeString(string s) {
        string b;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                b += tolower(s[i]);
            }
        }
        return b;
    }
    bool palindrome(string s) {
        int left = 0, right = s.length()-1;
        while(left<right)
        {
            if(!isalnum(s[left])) 
                left++;
            else if(!isalnum(s[right])) 
                right--;
            else if(tolower(s[left])!=tolower(s[right])) 
                return false;
            else {
                left++; 
                right--;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        
        return palindrome(s);
    }
};
