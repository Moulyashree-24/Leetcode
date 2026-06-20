class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int j=nums.size()-1,k=0;
        vector<int> ans(j+1);
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(abs(nums[k])>abs(nums[j]))
            {
                ans[i]=nums[k]*nums[k];
                k++;
            }
            else
            {
               ans[i]=nums[j]*nums[j];
                j--;
            }
        }
     return ans;

    }
};

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         for(int i=0; i<nums.size(); i++)
//         {
//             nums[i]=nums[i]*nums[i];
//         }
//         sort(nums.begin(),nums.end());
//      return nums;
//     }
// };