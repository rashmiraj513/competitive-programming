#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int num) {
    int upperLimit = (int)(sqrt(num));
    if(num < 2) return 0;
    for(int i = 2; i <= upperLimit; i++) if(num % i ==0 ) return 0;
    return 1;
}
int main() {
    int num; cin >> num;
    cout << isPrime(num) << endl;
    return 0;
}