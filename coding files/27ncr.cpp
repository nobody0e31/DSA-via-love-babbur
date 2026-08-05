#include<iostream>
using namespace std;

int fact(int n ){
    int factor = 1;
    for(int i =1;i<=n;i++){

        factor = factor * i;
    }
return factor;
}


int nCr(int n , int r){

    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n-r);

    int ncr = fact_n / (fact_r * fact_nmr);

return ncr;

}

int main(){

    int n , r;
    cout<<"enter value of n & r: "<<endl;
    cin>>n>>r;
    
   cout<<nCr(n,r);
   
    return 0;
}