/*
 * Quick Sort algorithm uses Divide & Conquer technique. 
 * It picks an element named pivot and partition the array 
 * around the pivot, we can pick the pivot element by the following ways:
	1. As first element
	2. As last element.
	3. As Median
	4. As random element
 * The key process of Quick Sort algorithm is partition function. 
 * Target of partition function is given an array and a pivot element 
 * x at a position from where all the elements towards the left is smaller 
 * or, equal and all the elements towards the right is greater or, equal.
*/
#include<iostream>
using namespace std;
int partition(int arr[], int low, int high) {
    int pivot=arr[high], i=low-1;
    for(int j=low;j<high;j++) {
        if(arr[j]<=pivot) { 
            i++; swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}
void quickSort(int arr[], int p, int r) {
    if(p<r) {
        int pi=partition(arr, p, r);
        quickSort(arr, p, pi-1);
        quickSort(arr, pi+1, r);
    }
}
int main() {
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    quickSort(arr, 0, n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}