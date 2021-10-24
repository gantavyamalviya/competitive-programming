import java.util.*;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int arr[] = new int[2];
        Map<Integer, Integer> map = new HashMap<> ();
        for(int i=0; i<nums.length; i++){
            if(map.containsKey(target-nums[i]) == true){
                arr[0] = i;
                arr[1] = map.get(target-nums[i]);
            }else{
                map.put(nums[i], i);
            
            }
        }
        return arr;
    }
}