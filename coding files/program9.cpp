#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int row =  1;

    while(row <= n)
    {
        int col = 1;
        char ch;
        while(col <= n)
        {
            ch = 'A' + col - 1;
            cout << ch;
            col = col + 1;
        
        }

    
    cout<<endl;
    row = row + 1;


}

return 0;
}