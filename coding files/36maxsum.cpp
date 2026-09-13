#include<iostream>
using namespace std;

int main(){

    int n = 9;
    int arr[9] = { 32,-45, 5,2,-34 , 24,54,44,-4};
        int cs = 0;
        int maxs = INT_MIN;

    for (int i = 0; i <n; i++){


            cs += arr[i];

            maxs = max(cs,maxs);
            if (cs<0){

                cs = 0;
            }


        }
        cout<<"max is "<<maxs;


    }

