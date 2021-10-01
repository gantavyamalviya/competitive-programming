class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        for(auto x : nums2)
            m[x]++;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
           if(m[nums1[i]]-- > 0)
               ans.push_back(nums1[i]);
        }
        return ans;
    }
};
