#include<iostream>
using namespace std;

int main(){

    int n , i, k ,j;

    cout<<"enter n";
    cin>>n;
    bool isPrime = 1;

    for(i = 2;i< n;i++){

        
            if(n%i == 0){
            isPrime = 0;
            break;
        }


    }

    if(isPrime == 1)
    {
        cout<<"n is prime number"<<endl;
    }
    else
    {

        cout<<"n is not a prime number"<<endl;
    }

    return 0;
}