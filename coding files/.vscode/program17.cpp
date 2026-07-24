#include<iostream>
using namespace std;

int main(){

    int i , n, j , k , l;
    int space;

    cout<< " enter n";
    cin>>n;

    for(i=1;i<= n;i++){

        for(j=n-i ;j !=0 ;j--)
        {
            
            cout<<" ";
        
        }
        

        for(k =1;k <=i ;k++){

            cout<<k;

                }

        int x = i-1;
        for(l=2;l<=i;l++){

            cout<<x;
            x = x-1;
        }
        cout<<endl;
    }
    return 0;
    
}