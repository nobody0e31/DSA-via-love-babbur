#include<iostream>
#include<math.h>
using namespace std;
int main()
{    
double i =0 ;
double ans = 0;
int n;
cout<<"enter n "<<endl;
cin >> n;
while(n != 0)
    {   
        double bit = n & 1;
        ans = (bit * pow(10 , i)) + ans;
        n = n >> 1;
        i++;
    }
    cout<<"answer is : "<<ans;
}