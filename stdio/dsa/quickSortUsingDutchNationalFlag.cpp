#include<iostream>
#include<vector>
using namespace std;
void partition(vector<int> &arr, int beg, int last, int &start, int &mid) {
    int pivot=arr[last], end=last;
    while(mid<=end) {
        if(arr[mid]<pivot) { swap(arr[mid], arr[start]); mid++; start++; }
        else if(arr[mid]>pivot) { swap(arr[mid], arr[end]); end--; }
        else mid++;
    }
}
void quickSort(vector<int> &arr, int beg, int last) {
    if(beg>=last) return;
    if(last==beg+1) {
        if(arr[beg]>arr[last]) { swap(arr[beg], arr[last]); return; }
    }
    int start=beg, mid=beg;
    partition(arr, beg, last, start, mid);
    quickSort(arr, beg, start-1); 
    quickSort(arr, mid, last);
}
vector<int> quickSortUsingDutchNationalFlag(vector<int> &arr) {
    quickSort(arr, 0, arr.size()-1); return arr;
}
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int> res=quickSortUsingDutchNationalFlag(arr);
        for(int a:res) cout<<a<<" ";
        cout<<endl;
    }
    return 0;
}