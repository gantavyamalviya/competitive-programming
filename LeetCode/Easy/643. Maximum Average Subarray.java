class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int cur_sum=0;
        for(int i=0; i<k; i++){
            cur_sum += nums[i];
        }
        int max_sum = cur_sum;
        for(int i=k; i<nums.length; i++){
            cur_sum += (nums[i] - nums[i-k]);
            max_sum = Math.max(cur_sum,max_sum);
        }
        double ans = (double)max_sum/k;
        return ans;
    }
}
