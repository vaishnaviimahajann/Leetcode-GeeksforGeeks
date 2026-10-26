#include<iostream>
using namespace std;
#include<vector>
vector<int> nextgreaterelement2(vector<int>&nums){
    int n = nums.size();
    vector<int>nge(n,-1);
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < i+n ; j++){
            int idx = j% n;
            if(nums[idx] > nums[i]){
                nge[i] = nums[idx];
                break;

            }
        }
    }

    return nge;
}
int main(){
    vector<int>nums={4,7,2};
    vector<int>ans = nextgreaterelement2(nums);
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}