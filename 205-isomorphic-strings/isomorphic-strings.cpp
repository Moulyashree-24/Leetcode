class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> seen1;
         unordered_map<char, char> seen2;
        for(int i=0; i<s.size(); i++)
        {
            if(seen1.find(s[i]) != seen1.end())
            {
                if(seen1[s[i]] != t[i])
                {
                    return false;
                }
            }
            if( seen2.find(t[i]) != seen2.end())
            {
                if( seen2[t[i]] != s[i])
                {
                    return false;
                }
            }
            seen1[s[i]]=t[i];
            seen2[t[i]]=s[i];
            
        }
        return true;
    }
};