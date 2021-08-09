// Question Link : https://leetcode.com/problems/add-strings/
// Time Complexity : O(N) where n is the length of string
// Spcae Complexity : O(1)


class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum = 0, i = num1.length() - 1, j = num2.length() - 1;
        string str;
        while (i >= 0 || j >= 0 || sum > 0) {
            if (i >= 0) sum += (num1[i--] - '0');
            if (j >= 0) sum += (num2[j--] - '0');
            str.insert(0, 1, (sum % 10) + '0');
            sum /= 10;
        }
        return str;
    }
};
