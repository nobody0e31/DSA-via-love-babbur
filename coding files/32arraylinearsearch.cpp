#include<iostream>
using namespace std;

int checktarget(int arr[],int size,int target){
 for(int i = 0 ; i < size; i++){

        if(arr[i] == target){

            
        
            return i;
        }
    }
   return -1;
}

int main(){
    int size,target;
  
    cout<<"enter size of array and also target "<<endl;

    cin>>size>>target;

    int arr[size];

    for(int i = 0;i <size;i++){

        cout<<"enter element for array"<<endl;
        cin>>arr[i]; }
   
        cout<<"checking target via function  " << checktarget(arr,size,target)<<endl;


    return 0;
}

