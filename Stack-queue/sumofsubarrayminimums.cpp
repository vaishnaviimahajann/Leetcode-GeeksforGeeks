#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int sumofsubarrayminimums(vector<int>& arr){
    int n = arr.size();
    long long count = 0;
    for(int i = 0 ; i < n ; i++){
        int minn = INT_MAX;
        for(int j = i ; j < n ; j++){
            minn = min(minn ,arr[j]);
            count += minn;
        }
        
    }
    return count;
           
};
int main(){
    vector<int> arr = {3,1,2,4};
    cout<<sumofsubarrayminimums(arr);
    cout<<endl;
    vector<int> arr1 = {11,81,94,43,3};
    cout<<sumofsubarrayminimums(arr1);
    return 0;
}