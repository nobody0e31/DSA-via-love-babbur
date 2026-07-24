#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
   

    int row = 1;

    while(row<=n)
    {
        int col= 1;
        while(col<= n){

             char start = 'A'+ row+col-2;
            cout<<start;
            
            col = col + 1;
             

        }
        
        cout<<endl;
        row = row + 1;

    }

    return 0;

}