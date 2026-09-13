#include<iostream>
using namespace std;

int main(){
    cout<<"hello";

    int  size;
     cout<<"enter size of array";
    cin>>size;
    int arr[size];
   
    
    for(int i = 0; i < size; i++ ){

        cin>>arr[i];
        
    }


    for(int j = 0 ; j < size; j++){

        cout<<arr[j]<<endl;


    }

    //for largest what we do 


int largest = INT_MIN ;
    for(int k = 0; k<size;k++){
        if(largest < arr[k]){
            largest = arr[k];
        }

      
            
    }
     cout<<"largest is "<<largest<<endl;

int smallest = INT_MAX;
     for(int p = 0 ; p < size ; p++){

        if (smallest > arr[p]){

            smallest = arr[p];
        }


     }  
     cout<<"smallest is : "<<smallest;
     return 0;
}