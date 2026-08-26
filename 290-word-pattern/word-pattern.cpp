class Solution {
public:
    bool wordPattern(string pattern, string s) {  
        stringstream ss(s);
        vector<string> words;
        string word;
        int count=0;

        while (ss >> word)
        {
            words.push_back(word);
            count++;
        }

        if(pattern.size() != count)
        {
            return false;
        }

        unordered_map<char, string> seen1;
        unordered_map<string, char> seen2;

        for(int i=0; i<pattern.size(); i++)
        {
            if(seen1.find(pattern[i]) != seen1.end())
            {
                if(seen1[pattern[i]] != words[i])
                {
                    return false;
                }
            }

            if(seen2.find(words[i]) != seen2.end())
            {
                if(seen2[words[i]] != pattern[i])
                {
                    return false;
                }
            }

            seen1[pattern[i]] = words[i];
            seen2[words[i]] = pattern[i];
        }
    return true;
    }
};