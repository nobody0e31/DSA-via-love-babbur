#include<iostream>
#include<math.h>
using namespace std;

void dtb(int k )
{

    int ans = 0;
    
    int g = k;
    int p = 1;
    while (g > 0 ){

       int x = g % 2;
       ans = (p * x) + ans; 
       g = g / 2;
        //cout<<"repeat"<<endl;
        
        p = 10 * p;
       

    }
    cout<<ans;
   

}

    int main(){

        int n ;
        cout<<" enter n ";
        cin>>n;
        dtb(n);

        return 0;
    }

