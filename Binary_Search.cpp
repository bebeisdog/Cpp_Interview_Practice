#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector <int> &arr, int target){
    int left = 0, right = arr.size() -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] >= target){
            right = mid - 1 ;
        }else{
            left = mid + 1 ;
        }
    }
    return left;
}

int main(){
    vector <int> arr = {1,3,5,6};
    int target = 2, searchIdx = 0;

    searchIdx = binarySearch(arr, target);
    cout << searchIdx ;

    return 0;
}