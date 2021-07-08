class Solution {
public:
       int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        
        vector<int> v;
        for(auto it : arr){
            m[it]++;
        }

        for(auto it : m){
           v.push_back(it.second);
            }
        sort(v.begin(),v.end(),greater<int>());
        int sum=0;
      
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            if(sum>=arr.size()/2){
                return i+1;
            }
        }
        
       return v.size(); 
    }
};
