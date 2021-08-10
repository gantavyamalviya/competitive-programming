// Time Complextiy : O(n)
// Spce Complextiy : O(1)


class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int counter_one=0,counter_flip=0;
        for (auto ch : s) {
            if (ch == '1') {
                ++counter_one;
            } else {
                ++counter_flip;
            }
            counter_flip = std::min(counter_one, counter_flip);
        }
        return counter_flip;
    }
};
