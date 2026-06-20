class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int j=0,count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(count==0)
            {
                nums[j]=nums[i];
            }
            if(nums[i]==nums[j])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return nums[j];
    }
};