class NumArray {
    vector<int> my_nums;
public:
    NumArray(vector<int>& nums) {
        my_nums=nums;
    }
    
    int sumRange(int left, int right) {
        if(left==right)
        {
            return my_nums[left];
        }
        int sum =0;
        for(int i=left; i<=right; i++)
        {
            sum += my_nums[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */