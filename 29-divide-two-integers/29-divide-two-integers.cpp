class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==-2147483648 && divisor==-1) return 2147483647;
        int count=0;
        int sign = dividend < 0 ^ divisor < 0  ? -1: 1;
        long long int div = abs(dividend);
        long long int divsor = abs(divisor);
        long long int temp=0;
        long long int quotient=0;
        
       for (int i = 31; i >= 0; --i) {
            if (temp + (divsor << i) <= div) {
                temp += divsor << i;
                quotient |= 1LL << i;
            }
        }
        if(sign==-1) quotient=-quotient;
        return quotient;
    }
};