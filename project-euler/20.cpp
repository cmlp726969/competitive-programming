
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
using namespace std;

int fact(int n){
    int factSum = 1;
    for(int i = 1; n >+ i; n--){
        factSum *= n;
    }
   return factSum;
}

int sum(int n){
    int  digitSum = 0;
    while(n){
        digitSum += n % 10;
        n /= 10;
    }
    return digitSum;
}

int main(){
    int factDigitSum = sum(fact(100));
    cout << factDigitSum << endl;

}
