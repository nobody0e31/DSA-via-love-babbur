#include<iostream>
using namespace std;


int printhello(){

    cout<<"hello";
    return 3;
}
int mini(int a, int b){

    if (a>b){
        cout<<"a>>b";
    }
    else
    {cout<<"a<<b"<<endl;
    }
}
int main(){
    int a , b;
    cout<<"enter a & b "<<endl;
    cin>>a>>b;
    mini(a,b);

    int val = printhello();
    cout<<"\n val is :"<<val<<endl;
 

}