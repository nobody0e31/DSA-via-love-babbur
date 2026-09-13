#include<iostream>
#include<vector>
using namespace std;
vector<int > Pair(vector<int> nums , int target){
vector<int> ans;
for(int i = 0 ;i<nums.size();i++){
    for(int j = i +1;j<nums.size();j++){
        if (nums[i] + nums[j] == target) {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
         }
    }
}
return ans;
}
int main(){
    int target;  int temp;
    cout<<"enter target" ;
    cin>>target;
    vector<int> nums;
    cout<<"enter element for array";
    while(cin>>temp){
    nums.push_back(temp);
    }
    vector<int> ans = Pair(nums,target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}