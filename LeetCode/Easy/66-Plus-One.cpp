class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x=digits.size()-1;
        while(x>=0){
            if(digits[x]==9){
            digits[x]=0;
            //digits[x-1]++;
        }
        else
        {  digits[x]++;
        
        return digits;}
            x--;
        }
        
        digits.insert(digits.begin(),1);
        return digits;
    }
};
