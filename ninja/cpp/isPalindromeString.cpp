#include<iostream>
using namespace std;
int main() {
    string str; getline(cin, str);
    int low=0, high=str.size()-1, flag=0;
    while(low<high) {
        if(str[low]!=str[high]) { flag=1; break; }
        low++; high--;
    }
    flag==0?cout<<"String is palindrome.\n":cout<<"String is not palindrome.\n";
    return 0;
}