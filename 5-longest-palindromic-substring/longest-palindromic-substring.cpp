class Solution {
public:
    string longestPalindrome(string s) {
       int n = s.size();
       int start = 0, bestLen = 1;
       int i = 0;
    while (i < n){
        int l = i, r = i;
        while (r + 1 < n && s[r + 1] == s[i])
            r++;
        i = r + 1;
        while (l - 1 >= 0 && r + 1 < n && s[l - 1] == s[r + 1]){
            l--;
            r++;
        }
        if (r - l + 1 >bestLen){
            bestLen = r - l + 1;
            start = l;
        }
        
    }
    return s.substr(start, bestLen);
    }
};