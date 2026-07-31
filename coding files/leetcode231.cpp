#include<iostream>
using namespace std;
int main()
{

    int i ;

    int n ;
    cout<<"enter n ";
    cin>>n;
    if(n==1){
        cout<<true;}
        while(n!=1){
    if(n%2==0){

        n = n/2;
        if(n==1){
            
            cout<<true;
            break;
        }
    }
       else
        
        { 
            cout<<false;

            break;
        }
    }


}