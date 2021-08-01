// Difficulty : easy
// Time Complexity : O(n)  {Brute force approach gives O(n^2). You might get TLE in some cases}
// Space Complxity : O(n) {Because all elements are stored in map}

// Approach : store almost all elements in map starting from first occurence. If you get any vaild condition in between, then return true, otherwise false.
// Concept Used :  hashing

bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.count(nums[i])){
                int difference = abs(m[nums[i]]-i);
                if(difference <= k)
                    return true;
            }
            m[nums[i]] = i;
        }
        return false;
    }

