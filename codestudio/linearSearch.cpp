/*
 * Linear Search is also known as Sequential Search. 
 * This is the traditional method of searching an element in a list. 
 * In this search, all the elements of a list are traversed one by one 
 * and compared with the required element to check whether the list 
 * contains the required element or not.
*/

#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int item) {
    int loc=-1;
    for(int i=0;i<n;i++) {
        if(arr[i]==item) { loc=i; break; }
    }
    return loc;
}
int main() {
    int n, item; cin>>n>>item; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<linearSearch(arr, n, item);
    return 0;
}