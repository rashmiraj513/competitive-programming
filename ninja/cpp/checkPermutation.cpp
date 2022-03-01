#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool isPermutation(char input1[], char input2[]) {
    int size1=strlen(input1), size2=strlen(input2);
    sort(input1, input1+size1); sort(input2, input2+size2);
    int ans=strcmp(input1, input2);
    if(ans==0) return true;
    return false;
}
int main() {
    int size = 1e6; char str1[size]; char str2[size];
    cin>>str1>>str2;
    cout<<(isPermutation(str1, str2)?"true":"false");
    return 0;
}