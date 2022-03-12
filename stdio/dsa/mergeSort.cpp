/*
 * Merge Sort algorithm uses divide and conquer technique. 
 * In this algorithm, the array got divided into two halves 
 * and the algorithm calls itself for these divided sub-arrays 
 * and then merge the sorted sub-arrays into the solution. For merging, 
 * we use the merge function and for calling, we use mergeSort function.
*/
#include<iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high) {
    int n1=mid-low+1, n2=high-mid;
    int left[n1], right[n2];
    for(int i=0;i<n1;i++) left[i]=arr[low+i];
    for(int i=0;i<n2;i++) right[i]=arr[mid+1+i];
    int i=0, j=0, k=low;
    while(i<n1 && j<n2) {
        if(left[i]<=right[j]) {
            arr[k]=left[i]; i++;
        }
        else {
            arr[k]=right[j]; j++;
        }
        k++;
    }
    while(i<n1) arr[k++]=left[i++];
    while(j<n2) arr[k++]=right[j++];
}
void mergeSort(int arr[], int low, int high) {
    if(low<high) {
        int mid=(low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}
int main() {
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}