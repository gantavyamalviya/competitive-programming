// ITme Complexity : O(n^2)
// Space Complexity : O(1)

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int res = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = n-1; i >= 0; i--) {
            int lo = 0, hi = i-1;
            
            while (lo < hi) {
                if (nums[lo] + nums[hi] > nums[i]) {
                    res += hi - lo;
                    hi--;
                }
                
                else lo++;
            }
        }
        
        return res;
    }
};
