#include<iostream>
using namespace std;

int main(){

    int target;
    cout<<"enter target and size of array"<<endl;
    cin>>target;
    int size;
    cin>>size;
    int arr[size];
    cout<<"enter elements for array";
    for(int i = 0; i<size ;i++){
        cin>>arr[i];

    }

    for (int j = 0 ;j<size;j++){

        cout<<arr[j] <<" ";
    }

    for (int x = 0;x<size;x++){

        for (int t = 0 ;t<size;t++){

            if(arr[x] + arr[t] == target){

                return x , t;
                
            }

        }
    }


return 0;

}