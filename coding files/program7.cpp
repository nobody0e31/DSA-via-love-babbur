#include<iostream>
using namespace std;

int main(){

    int i , j , n;
    

    cout<<"enter value of n";
    cin>>n;

    for(i = 1; i <= n; i++)

    {


                int temp = j;
        
        for(j = 1; j<=i; j++)
    {
        cout<<temp;
        temp = temp - 1;

    }
    
    cout<<endl;
    }
}