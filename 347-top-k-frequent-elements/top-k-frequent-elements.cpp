class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        vector<int> output;

        for(int i = 0; i < nums.size(); i++)
        {
            if(freq.find(nums[i]) == freq.end())
            {
                freq[nums[i]] = 1;
            }
            else
            {
                freq[nums[i]]++;
            }
        }

        vector<pair<int, int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        for(int i = 0; i < k; i++)
        {
            output.push_back(v[i].first);
        }

        return output;
    }
};