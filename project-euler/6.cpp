#include <iostream>
#include <chrono>

using namespace std;

long long natural(){
    long long sumn = 0;
    for(int i = 1; i <= 100; i++){
        sumn += i*i;
    }
    return sumn;
}

long long squaresum(){
    long long sums = 0;
    for(int i = 1; i <= 100; i++){
        sums += i;
    }
    long long sqsum = sums*sums;
    return sqsum;
}

int main(){
    auto start = chrono::high_resolution_clock::now();

    long long sumn = natural();
    long long sqsum = squaresum();
    long long solve = sqsum-sumn;
    cout << solve << endl;

    auto stop = chrono::high_resolution_clock::now();
    auto duration_us = chrono::duration_cast<chrono::milliseconds>(stop - start);
    cout << "Execution time: " << duration_us.count() << " us" << endl;
}
