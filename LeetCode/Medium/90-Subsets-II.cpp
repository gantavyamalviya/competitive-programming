// Question Link : https://leetcode.com/problems/subsets-ii
// Difficulty : Medium
// Time Complexity : O(n * 2^n)
// Space Complexity : O(2^n)
// Concept Used : Recursive Tree

//Approach : If all elemts are unique or duplicats-allowed then we will get 2^n subsets. But in this problem we have to remove duplicate.
//            So first we will sort the given vector to identify duplicates easily. Then we will create two vectors one multidimentional for storing the subsets(ans) and second linear vector for storing the elements of each subset 
//            Now, let's talk about out recursive function findSubsets :-
//            We will 
class Solution {
private:
    void findSubsets(int idx, vector<int> &ds, vector<vector<int>> &ans, vector<int> &nums)
    {
        ans.push_back(ds);
        for(int i = idx; i<nums.size(); i++)
        {
            if(i!=idx and nums[i]==nums[i-1])
                continue;
            ds.push_back(nums[i]);
            findSubsets(i+1,ds,ans,nums);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        findSubsets(0,ds,ans,nums);
        return ans;
    }
};
