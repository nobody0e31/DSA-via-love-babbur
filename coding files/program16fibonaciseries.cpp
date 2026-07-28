#include<iostream>
using namespace std;

int main(){

    int a=0, b=1, next, n;

    cout<<"enter n for fibonaci series length"<<endl;
    cin>>n;
            cout<<"series is :"<<endl;
            cout<<a<<endl;
            cout<<b<<endl;

    for(int i =0;i<=n;i++){

        next = a+b;
        cout<<next<<endl;
        a = b;
        b=next;
    }
}