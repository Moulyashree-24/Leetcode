class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n,counter=0,count=0,num;
        for(int i : nums)
        {
            n=i;
            counter = 0;
            while(n!=0)
            {
                num=n%10;
                n=n/10;
                counter++;
            }
            if(counter%2==0)
            {
                count++;
            }
        }
    return count;
    }
};