#include<iostream>
using namespace std;

int main(){

    int n ;
    int a = 0;
    int ans=0;

    cout<<"enter n";
    cin>>n;
int i = 1;
while(n>0){

    a = n % 2;

    n = n / 2;
    ans = ans + ( a * i);
    i = i * 10;


}
cout<<ans;

}