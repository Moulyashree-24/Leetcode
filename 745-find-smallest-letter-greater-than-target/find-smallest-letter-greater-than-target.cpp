class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {


        if(target == 'z')
        {
            return letters[0];
        }

        int low=0, high=letters.size()-1, mid; 

        while(low<high)
        {
            mid=low + (high - low) / 2;
            if(letters[mid]>target)
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }

        }
        if(letters[low]>target)
        {
            return letters[low];
        }

        return letters[0];
    }
};