#include<iostream>
using namespace std;

int main(){

int n ;
int r;
cout<<"enter n and r: "<<endl;
cin>>n>>r;

    int i , j , k ,rf =1 ,nrf=1;
    int fact=1;
    i =n ;
    while(i>=1){

        fact = i * fact;
        i--;
    }

    j = r;
    while(j>=1){

        rf = rf * j;
        j--;
    }
    
    k = n-r;
    while(k >= 1){
        nrf = nrf * k;
        k--;
    }
    cout<<"fact , rf , nrf : "<<fact<<" "<<endl <<rf<<" "<<endl<<nrf<<endl;
    int ncr = (fact)/((rf)*(nrf));
    cout<<"answer is :"<<ncr;

return 0;
    }
    