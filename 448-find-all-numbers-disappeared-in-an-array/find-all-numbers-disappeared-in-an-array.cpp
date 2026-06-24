class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        vector<int>ans;
        set<int> s(nums.begin(),nums.end());
        for(int i=1; i<=nums.size(); i++)
        {
            if(s.find(i) == s.end())
            {
                ans.push_back(i);
            }
        }
     return ans;   
    }
};









// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> missing;
//         for(int i=1; i<=nums.size(); i++)
//         {
//             bool found = false;
//             for(int j=0; j<nums.size(); j++)
//             {
//                 if(nums[j]==i)
//                 {
//                     found = true;
//                 }
//             }
//             if (found == false)
//             {
//                 missing.push_back(i);
//             }
      
//         } 
//     return missing;
//     }
// };