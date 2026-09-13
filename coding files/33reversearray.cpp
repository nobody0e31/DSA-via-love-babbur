#include<iostream>
using namespace std;

void reversearray(int arr[], int sz){

    int start = 0;
    int end = sz-1;
    while(start<end){

        swap(arr[start],arr[end]);

        start++;
        end--;
    }
}

int main(){

    int arr[]= {2,3,5,6,7};
    int sz = 5;

    reversearray(arr,sz);
    for(int i = 0;i<sz;i++){

        cout<<arr[i]<<" ";
    }

return 0;
}