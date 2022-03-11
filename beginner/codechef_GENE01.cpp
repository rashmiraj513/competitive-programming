#include<iostream>
using namespace std;
int main() {
	string str; getline(cin, str);
	if(str=="R R" || str=="R B" || str=="G R" || str=="B R" || str=="R G") cout<<"R\n";
	else if(str=="B B" || str=="G B" || str=="B G") cout<<"B\n";
	else cout<<"G\n";
	return 0;
}