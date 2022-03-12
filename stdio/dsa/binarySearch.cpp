/*
 * Binary Search is also known as Interval Search
 * and uses Divide & Conquer technique. This search can
 * only be used in case of sorted lists. Instead of searching
 * an element one by one in the list, it directly goes to the middle
 * element of the list by dividing the array into two sub-arrays and
 * by comparing the required element with the mid element of the list, 
 * it decides in which sub-array the required element exists.
*/

#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[], int n, int item) {
    int low=0, high=n, loc=-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(arr[mid]==item) { loc=mid; break; }
        else if(arr[mid]>item) high=mid-1;
        else low=mid+1;
    }
    return loc;
}
int main() {
    int n, item; cin>>n>>item; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);       // If array is not sorted.
    cout<<binarySearch(arr, n, item);
    return 0;
}