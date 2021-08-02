// Question Link : https://leetcode.com/problems/container-with-most-water/
// Difficulty : Medium
// Time Complexity : O(n)
// Space Complexity : O(1)
// Algo used : Greedy , Two Pointer
 
//Approach : Starting from both the corners of array, check for the vaild area. Then compare with previously stored max_area and replace if current area is maximum. Then return the max_area.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int width=height.size();
        int max_area=0;
        while(left<right)
        {   
            width = right-left;
            max_area = max(max_area,(min(height[left],height[right])*width));
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return max_area;
    }
};
