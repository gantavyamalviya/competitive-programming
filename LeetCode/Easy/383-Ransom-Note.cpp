class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(auto s : magazine) m[s]++;
        for(auto s : ransomNote) 
            if(m[s] > 0){  m[s]--; continue;}
            else return false;
        return true;
    }
};
