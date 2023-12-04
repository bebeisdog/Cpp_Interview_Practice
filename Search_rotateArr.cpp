/* Leetcode 33 */
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,3};
    int target = 0;
    int left=0, right = nums.size()-1;
    
    if (!right) return nums[left]==target? left: -1;
    else{
        while(left <= right){
            int mid = (left+right)/2;
            if(nums[left] <= nums[mid]){
                // left array got order
                if(nums[left] <= target && target <= nums[mid]){
                    right = mid -1;
                }else{
                    left = mid + 1;
                }
            }
            else{
                // right array got order
                if(nums[right] >= target && target >= nums[mid]){
                    left = mid + 1;
                }else{
                    right = mid -1;
                }
            }
        }
        if(target == nums[left]){
            cout << left;
        }else{
            cout << -1;
        }
    }

    return 0;
}