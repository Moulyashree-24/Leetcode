class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, num, prod=1;
        while(n>0)
        {
           num = n % 10;
           sum = sum + num;
           prod = prod*num;
           n = n/10;
        }
     int result = prod - sum ;
     return result;
    }
};