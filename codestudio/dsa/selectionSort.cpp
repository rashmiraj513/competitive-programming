/*
 * In the Selection Sort technique, we virtually 
 * maintain two sub-arrays; the first one is sorted 
 * which is initially empty and the second one is unsorted 
 * which is the whole array initially. The Selection Sort 
 * algorithm sorts an array by repeatedly finding the minimum 
 * element from unsorted part and putting it at the beginning of the unsorted array.
*/
#include<iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        int mn=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[mn]) mn=j;
        }
        swap(arr[mn], arr[i]);
    }
}
int main() {
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    selectionSort(arr, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}