#include <iostream>
using namespace std;

// ngmbil di g2g
int fibHelper(int n, int prev2, int prev1) {
    if (n == 0) {
        return prev2;
    }

    if (n == 1) {
        return prev1;
    }

    return fibHelper(n - 1, prev1, prev2 + prev1);
}

int fib(int n){
    return fibHelper(n, 0, 1);
}

int main() {
    long long exceed = 4000000;
    long long sum = 0;
    long long n = 1;
    long long fibbo = 0;

    while(true){
        long long fibbo = fib(n);

        if(fibbo > exceed) break;

        if(fibbo % 2 == 0) sum += fibbo;
        n++;
    }
    cout << sum << endl;
    return 0;
}
