class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l,r;
        int sum=0;
        double max_avg,avg;

        for(int i=0; i<k; i++)
        {
            sum += nums[i];
        }
        avg = (double) sum/k;
        max_avg=avg;
        l=0;
        r=k-1;
        while(r < nums.size()-1)
        {
            sum = sum - nums[l];
            l++;
            r++;

            sum = sum + nums[r];
            avg = (double)sum/k;
            max_avg = max(avg, max_avg);
        }
    return max_avg;
    }
};

