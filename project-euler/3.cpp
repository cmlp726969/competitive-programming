#include <iostream>

using namespace std;

int main(){
    int i = 1, j;
    long long num = 600851475143, count;

    while(i <= num){
        count  = 0;
        if(num % i == 0){
            j = 1;
            while(j <= i){
                if(i % j == 0){
                    count++;
                }
                j++;
            }
            if(count == 2){
                cout << i << " is a prime number" << endl;
            }
        }
        i++;
    }
    return 0;
}
