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
void insertionSort(int arr[], int n) {
    for(int i=1;i<n;i++) {
        int key=arr[i], j=i-1;
        while(key<arr[j] && j>=0) {
            arr[j+1]=arr[j]; j--;
        }
        arr[j+1]=key;
    }
}
int main() {
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    insertionSort(arr, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}