class Solution {
    public int majorityElement(int[] nums) {
        // for(int i=0; i<nums.length; i++){
        //     int count=1;
        //     for(int j=i+1; j<nums.length; j++){
        //         if(nums[i] == nums[j])
        //             count++;
        //     }
        // if(count>nums.length/2){
        //     return nums[i];
        // }
        // }
        // return -1;
        //Moore's Voting Algo:
        int res=0, count=1;
        for(int i=1; i<nums.length; i++){
            if(nums[res] == nums[i])
                count++;                      //Find a Candidate.
            else
                count--;
            if(count==0){
                res=i;
                count=1;
            }
        }
        
        count=0;
        for(int i=0; i<nums.length; i++)
            if(nums[res] == nums[i]){
                count++;                       //Check if candidate is actually a majority.
            }
            if(count<nums.length/2)
                return -1;
        return nums[res];
    }
}
