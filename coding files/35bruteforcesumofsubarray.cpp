#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n = 5;
    int arr [5] = {2,4,5,-33,-44};
    int maxs = INT_MIN;

    for (int st = 0 ; st < n; st++){

        int cs= 0;

        for (int end = st;end < n;end ++){


            cs+= arr[end];
            

        
            maxs = max(cs,maxs);

            }

        
        }cout<<"max "<<maxs;  
    }
  

  