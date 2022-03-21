#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int quantity, price;
        cin>>quantity>>price;
        double totalPrice=quantity*price;
        if(quantity>1000) {
            totalPrice=totalPrice-totalPrice/10;
        }
        printf("%.6lf\n", totalPrice);
    }
	return 0;
}
