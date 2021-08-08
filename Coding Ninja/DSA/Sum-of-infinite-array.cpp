// question link : https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381865?leftPanelTab=0
// Time Complexity : O(n)
// Space Complextiy : O(n)

vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    long long mod = 1000000007;
    vector <int> ans(q);
    vector<long long> presum(n+1);
    presum[0] = 0;
    for(long long i=0; i<n; i++)
        presum[i+1] = (presum[i] + arr[i]) % mod;
    long long temp;
    for(long long i = 0; i<q; i++)
    {
        long long l = queries[i][0];
        long long r = queries[i][1];
        l--;
        temp= (presum[r%n] - presum[l%n] + ((presum[n] * ((r/n - l/n) % mod )))) % mod;
            ans[i] = temp;
    }
    return ans;
    
}
