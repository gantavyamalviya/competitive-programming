// Time Complexity : O(n)
// Space Complexity : O(1)


class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.empty() and B.empty())
            return true;
        int count=A.size();
        while(count>0)
        {
           if(A==B)
           {
               return true;
           }
            char c=A.front();
            A.erase(A.begin(),A.begin()+1);
            A.push_back(c);
            count--;
        }
        return false;
    }
};
