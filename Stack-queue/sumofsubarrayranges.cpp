#include <bits/stdc++.h>
using namespace std;
#include <vector>
    int subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;

        for(int i = 0 ; i < n ; i++){
            int minn = INT_MAX;
            int maxx = INT_MIN;

            for(int j = i ; j < n ; j++){
                minn = min(minn,nums[j]);
                maxx = max(maxx,nums[j]);

                 count += maxx-minn;
            }
        }
        return count;
        
    }
    int main(){
        vector<int> nums = {1,4,3,2};
        cout<<subArrayRanges(nums);
        return 0;
    }