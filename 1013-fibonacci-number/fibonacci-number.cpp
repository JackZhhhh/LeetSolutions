class Solution {
public:

    int proc_fib (int n)
    {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        return proc_fib(n-1) + proc_fib(n-2);
    }
    int fib(int n) {
        return proc_fib(n);
    }
};