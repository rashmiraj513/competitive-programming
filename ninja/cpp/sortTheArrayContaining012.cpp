#include<iostream>
using namespace std;
/*
 * In this sorting, we have used Dutch National Flag algorithm.
 * This algorithm can be applied on the arrays where it contain only three distinct 
 * elements; in this case 0, 1 and 2. The working of this algorithm is to maintain three pointers
 * low, mid and high. low and mid points to beginning of the array and high points to the end of the array.
 * Now, to sort the array, we have to scan the array and apply the following rules:
 * (i). Whenever 0 is available then swap arr[mid] with arr[low] and increment mid and low both.
 * (ii). Whenever 1 is available then just increment mid.
 * (iii). When 2 is available then swap arr[mid] with arr[high] and just decrement high.
 * When these specified conditions are applied then we'll get the sorted array.
*/
void sort012(int arr[], int n) {
    int low=0, mid=0, high=n-1;
    while(mid<=high) {
        switch(arr[mid]) {
            case 0: {
                swap(arr[low++], arr[mid++]); break;
            } case 1: {
                mid++; break;
            } case 2: {
                swap(arr[mid], arr[high--]); break;
            }
        }
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort012(arr, n);
        for(int i=0; i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}