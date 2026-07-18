class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        int num, ans = 0;
        while(true)
        {
            num=n%10;
            ans+=num*num;
            n=n/10;
            if(n==0)
            {
                n=ans;
                if(ans == 1)
                {
                    return true;
                }
                if(seen.find(ans) == seen.end())
                {
                    seen.insert(ans);
                }
                else
                {
                    break;
                }
                ans = 0;
            }
            

        }
        return false;
    }
};