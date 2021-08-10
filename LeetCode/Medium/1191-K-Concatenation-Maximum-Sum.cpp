const int m=1000000007;
class Solution {
public:
    long long kadane(vector<int>v){
        long long sum=0;
        long long res=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            if(sum>res)
                res=sum;
            if(sum<0)
                sum=0;
        }
        return res;
    }
    
    
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        long long s=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            s+=arr[i];
        }
        if(k==1){
            long long ans=kadane(arr);
            return ans;
        }
        if(s<0){
            for(int i=0;i<n;i++){
                arr.push_back(arr[i]);
            }
            long long ans=kadane(arr);
            return ans;
        }
        else{
            for(int i=0;i<n;i++){
                arr.push_back(arr[i]);
            }
            long long ans=(kadane(arr)%m+((k-2)*s)%m)%m;
            return ans;
        }
    }
};
