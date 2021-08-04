// Question Link : https://leetcode.com/problems/next-greater-element-ii/
// Timme Complexity : O(n)
// Space Complexity : O(n)
// Concept used : Stack

// Approach : Using brute-force approach we will get O(n^2) Time complxity and we might get TLE in some cases. So, to solve this problem efficiently we will use stack(LIFO) to reduce the Time complexity to O(n)
//            According to question description, we can check the next greater element circularly. so, to make this problem easier we will iterate till 2*n-1. 
//            we will start from the end of given vector and iterate in reverse direction. We will use i%n to avoid memory overflow.
//                        

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> nge(n, -1);
        stack<int> st; 
        for(int i = 2*n-1;i>=0;i--) {
            while(!st.empty() && st.top() <= nums[i%n]) {
                st.pop();         // to remove all lesser elements
            }
            
            if(i<n) {
                if(!st.empty()) nge[i] = st.top(); // pick the next greatest element 
            }
            st.push(nums[i%n]);
        }
        return nge; 
    }
};
