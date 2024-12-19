#include<iostream>
using namespace std;

void reverseArr( int arr[], int n){
for(int i=0; i<n; i++){
    cout << arr[i] << " , ";
}
cout<<endl;
}




int main(){

    int arr[] = {2,4,7,8,9};
    int n = sizeof(arr) / sizeof(int);

    int temp[n];
    for(int i=0; i<n; i++){
        int j = n-i-1;
        temp[i]= arr[j];

    }

    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }

    cout << "Reversed Array: ";
    reverseArr(arr, n);


    return 0;
}


/*    
  void reverseArray(vector<int> &arr) {
        // code here
         int start=0;
        int end=arr.size()-1;
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;

*/