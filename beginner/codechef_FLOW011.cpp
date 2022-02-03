#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    double basicSalary, grossSalary, da;
	    cin>>basicSalary;
	    if(basicSalary<1500) {
	        grossSalary=basicSalary*2;
	    } else {
	        da=basicSalary*98/100;
	        grossSalary=500+da+basicSalary;
	    }
	    printf("%.2lf\n", grossSalary);
	}
	return 0;
}
