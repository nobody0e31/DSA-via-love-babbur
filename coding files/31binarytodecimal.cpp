#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int ans = 0;
    int n ;
    cout<<"enter n ";
    cin>>n;
    

    
    int a = 0;
    int i = 0;
    while(n>0){
        a = n;
         //a = 1011 ; supposed
        a = a % 10;

        ans = ans + (pow(2,i) * a);
        
        n = n / 10;
        i++;

    }
    cout<<ans;
}