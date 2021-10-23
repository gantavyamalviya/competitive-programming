class Solution {
    public int[] productExceptSelf(int[] nums) {
        int arr[] = new int[nums.length];
        int mul = nums[0];
        int flag =0;
            for(int i=1; i<nums.length; i++){
            if(nums[i] == 0){
                flag++;
                continue;
            }
            mul = mul * nums[i];
            
        }
        for(int i=0; i<arr.length; i++){
            if(flag == 0)
            arr[i] = mul/nums[i];
            else{
                if(flag>1)
                    arr[i] =0;
                else{ 
                    
                if(nums[i] == 0)
                    arr[i] = mul;
                else
                    arr[i] =0;
                }
            }
        }
        return arr;
    }
}