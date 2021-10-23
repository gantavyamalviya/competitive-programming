class Solution {
    public int missingNumber(int[] nums) {
//         Arrays.sort(nums);
//         for(int i=0; i<=nums.length; i++){
//              if(i == nums.length)
//                 return nums.length;
//             if(i != nums[i])
//                 return i;
           
//         }
//         return -1;
        
        // HashSet<Integer> set = new HashSet<>();
        // set.add(nums[0]);
        // for(int i=1; i<=n; i++){
        //     if(set.contains(i))
        //         continue;
        //     else
        int n = nums.length; 
        int sum = (n*(n+1))/2;
        int sumnums =0;
        for(int i=0; i<n; i++){
            sumnums += nums[i];
        }
        int ans  = sum - sumnums;
        return ans;
    }
}