class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                count ++;
                if(max<count)
                {
                    max = count;
                }
            }
            else
            {
                count =0;
            }
        }
        return max;
    }
};













// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count =0,max = 0;
//         int i=0,j=i+1;
//         if(nums.size() == 1 and nums[0] == 0)
//         {
//             return max;
//         }
//         while(j<=nums.size()-1)
//         {
//             if(nums[i] == nums[j])
//             {
//                 count ++;
//                 if(max <count)
//                 {
//                     max = count;
//                 }
//             }
//             else
//             {
//                 count =0;
//             }
//             i++;
//             j++;
//         }
//      return max+1 ;
//     }
// };