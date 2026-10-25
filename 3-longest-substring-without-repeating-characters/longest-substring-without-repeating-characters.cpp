class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    string res = "";
    string longest = "";
    int l = 0;
    int r = 0;

    while (r < s.length())
    {
        if (res.find(s[r]) != string::npos)
        {
            l = l + res.find(s[r]) + 1;
            res = res.substr(res.find(s[r]) + 1);
        }
        else
        {
            res = res + s[r];

            if (res.length() > longest.length())
            {
                longest = res;
            }

            r++;
        }
    }

    return longest.length();
}
};