class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = ans[i] * right;
            right = right * nums[i];
        }

        return ans;
    }
};








// class Solution {
//  public:
//      vector<int> productExceptSelf(vector<int>& nums) {
//          int i=0,j=0;
//          int prod = 1;
//          vector<int> ans;
//          while(i<nums.size())
//          {
//              if(i==j && i!= nums.size()-1)
//              {
//                  j++;
//              }
//              rod = prod*nums[j];
//              if(i==nums.size()-1 && j==i-1)
//              {
//                 ans.push_back(prod);
//                 return ans;
//              }
//              if(j==nums.size())
//              {
//                  ans.push_back(prod);
//                  i++;
//                  j=0;
//                  prod=1;
//              }
//               p
//              j++;
//         }
//         return ans;
//     }
// };










