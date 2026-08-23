class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int length, width;
        int area,result = 0;

        while(i<j)
        {
            length = min(height[i], height[j]);
            width = abs(i-j);
            area= length*width;

            if(height[i]< height[j])
            {
                i++;
            }
            else
            {
                j--;
            }

            result = max(result, area);
        }
    return result;
    }
};