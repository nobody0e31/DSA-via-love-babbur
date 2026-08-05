#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter n ";
    cin>>n;
    if(n==0){
        cout<<"it's false";
        return false;
    }
    if(n==1){
    cout<<"it's true";
        return true;
        
    }
        while(n!=1){
    if(n%2==0){
        n = n/2;
        if(n==1){
            cout<<"it'a true";
            return true;
            break;
        }
    }
        else{
            cout<<"it is false";
            
            return false;
           
        }
    }
}
   


