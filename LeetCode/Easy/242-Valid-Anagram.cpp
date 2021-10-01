class Solution {
public:
    bool isAnagram(string str, string t) {
        if(str.size() != t.size()) return false;
        unordered_map<char,int> m;
        for(auto s : str) m[s]++;
        for(auto s : t) 
            if(m[s] > 0){  m[s]--; continue;}
            else return false;
        return true;
    }
};
