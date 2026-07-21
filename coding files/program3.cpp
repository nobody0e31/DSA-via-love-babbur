#include<iostream>
using namespace std;

int main(){

    int i , j, n ;
    
    cout<<"enter value of n"<<endl;
    cin>>n;
        int temp = 1;

for(i=1;i<= n;i++){

for(j=1;j<= n;j++)
{

    cout<<temp;
    temp = temp + 1;

}
    
   cout<<endl;
   
}

return 0;

}