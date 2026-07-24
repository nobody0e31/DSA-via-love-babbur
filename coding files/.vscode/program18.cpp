#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n";
    cin>>n;


    int i = 0;
    while(i<= n){

        int x=1;
        while(x<=n-i)
        {

            cout<<x;
            x +=1;
        }

        int m =1;

        while(m<=i){

            cout<<"*";
            m +=1;
        }

        int l = 1;
        while(l<=i)
        {
            cout<<"*";
            l += 1;
        }

        int k =n-i;
        while(k>0)
        {

            cout<<k;
            k = k-1;
        }








        cout<<endl;
        i +=1;
    }
}