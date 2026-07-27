#include<iostream>
using namespace std;
int main()
{

    int n;

    cout<<" enter n :"<<endl;
    cin>>n;
    int a = 1;
    for( ; ; ){
        
        if(a <= n){
            cout<<a<<endl;
        }
        else{
            break;

        } 
        a++;   
    }
    
    
}