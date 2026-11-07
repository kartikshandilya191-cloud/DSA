class Solution {
public:
    int divide(int dividend, int divisor) {
         if(dividend == -2147483648 && divisor == -1) {
            return 2147483647;
    }

    long long a = dividend;
    long long b = divisor;

    bool negative = (a < 0) != (b < 0);

    if(a < 0){
     a = -a;
    }    
    if(b < 0){
     b = -b;
    }
    long long ans = 0;

    while(a >= b) {
        long long temp = b;
        long long count = 1;

        while(a >= (temp << 1)) {
            temp = temp << 1;
            count = count << 1;
        }

        a = a- temp;
        ans = ans + count;
    }

    if(negative) {
        ans = -ans;
    }

    return ans;
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna