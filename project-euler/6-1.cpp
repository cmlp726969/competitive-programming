#include <iostream>
#include <chrono>

using namespace std;

int main(){
    auto start = chrono::high_resolution_clock::now();
    int n = 100;
    // deret kuadrat
    long long naturalsum = (n * (n + 1) * ((2 * n ) + 1)) / 6;
    // deret aritmatika
    long long squaresum = (n * (1 + n)) / 2;
    squaresum *= squaresum;
    cout << naturalsum - squaresum << endl;

    auto stop = chrono::high_resolution_clock::now();
    auto duration_us = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Execution time: " << duration_us.count() << " us" << endl;

}
