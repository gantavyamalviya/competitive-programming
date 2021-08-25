// Time Complexity : O(n)
// Space Complexity : O(1)
// Concept Used : Two Pointer Algorithm

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3)
            return 0;
        int ans=0, up=0, down=0;
        for(int i=1;i<arr.size();i++)
        {
            if( down and arr[i-1] < arr[i] or arr[i-1] == arr[i])
                up=down=0;
            up += arr[i-1] < arr[i];
            down += arr[i-1] > arr[i];
            if(up and down)
                ans = max(ans, up+down+1);
        }
        return ans;
    }
};
