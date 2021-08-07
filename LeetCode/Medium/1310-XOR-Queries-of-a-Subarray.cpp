// Time Complexity : O(n)
// Space Complexity : O(q) // where q is number of queries

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        
        for(int i=1; i<arr.size(); i++)   
            arr[i] = arr[i] xor arr[i-1];
            
        for (auto &q: queries)
            ans.push_back(q[0] > 0 ? arr[q[0] - 1] ^ arr[q[1]] : arr[q[1]]);
        
        return ans;
    }
};
