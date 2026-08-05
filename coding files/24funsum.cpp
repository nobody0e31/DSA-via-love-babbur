#include<iostream>
using namespace std;

int sum(int n){

    int i = 0 , sum = 0;
    while(i<= n){
        sum = sum + i;
        i=i+1;

    }
    return sum;


}
int main(){

    int n;
    cout<<"n is :";
    cin>>n;
    
    int a = sum(n);
    cout<<"sum is "<<a;

}