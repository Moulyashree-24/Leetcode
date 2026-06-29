class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans0;
        vector<int> ans1;
        vector<vector<int>> ans;
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        for(int x: s1)
        {
            if(s2.find(x)==s2.end())
            {
                ans0.push_back(x);
            }
        }
        ans.push_back(ans0);
        for(int x: s2)
        {
            if(s1.find(x)==s1.end())
            {
                ans1.push_back(x);
            }
        }
        ans.push_back(ans1);
    return ans;
    }
};