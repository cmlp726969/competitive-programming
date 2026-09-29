#include <iostream>

using namespace std;

int main(){
    int num = 1000;
    long long sumTot = 0;
    long long modulo = 10000000000LL;

    for(int i = 1; i <= num; i++){
        long long sumSquare = 1;
        for(int j = 1; j <= i; j++){
            sumSquare = (sumSquare * i) % modulo;
        }
        sumTot = (sumTot + sumSquare) % modulo;
    }
    cout << sumTot << endl;
}
