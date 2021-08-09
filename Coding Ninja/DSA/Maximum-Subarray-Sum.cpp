// Time Complexity : O(n)
// Space Complexity : O(1)

long long maxSubarraySum(int arr[], int n)
{
    
    long long int maxi=0;
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
