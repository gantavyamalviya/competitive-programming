// Time complexity: O(N), where N is the number of elements in the array, as we sort the array in a single traversal only.

// Space complexity: O(1), as no extra space is required.


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid++],nums[low++]);
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high--]);
            }
        }
    }
};
