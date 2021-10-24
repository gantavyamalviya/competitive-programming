class Solution {
    int getSum(int n){
        if(n<10)
            return n;
        return getSum(n/10) + n%10;
    }
    public int addDigits(int num) {
        if(num<10)
            return num;
        return addDigits(getSum(num));
    }
}