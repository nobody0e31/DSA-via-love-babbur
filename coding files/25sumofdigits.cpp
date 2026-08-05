#include<iostream>
using namespace std;

int add = 0;
int sum(int n ){
    int i =n;
    while( n != 0){

        int x = n % 10;
        add = x + add;
        n = n/10;
        i = n;
    }
return add;
}

int main (){

    int n ;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"sum is "<<sum(n);
    
}