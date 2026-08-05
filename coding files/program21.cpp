#include<iostream>
#include<math.h>

using namespace std;
int main(){

    int  n , digit ,i = 0;
    
    cout<<"enter n ";
    cin>>n;

    int ans = 0;
    while(n!= 0){

        digit = n % 10;
        n = n/10;
         if (ans < (INT_MIN/10 ) || ans > (INT_MAX/10)){
            return 0;}

        ans =(10 * ans) + digit;
        i++;


    } 
    cout<<"ans is :"<<ans;
    
    return 0;

}






