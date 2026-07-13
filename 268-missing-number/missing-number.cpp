class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> arr(nums.begin(),nums.end());
        for(int i=0; i<=nums.size(); i++)
        {
            if(arr.find(i)==arr.end())
            {
                return i;
            }
        }
        return 0;
    }
};