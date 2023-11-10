#include <iostream>
#include <vector>
using namespace std;


// ���j���ɶ������׹L��
// int climbStairs(int n){
//     if(n == 0) return 0;
//     if(n==1){
//         return 1;
//     }
//     else if(n==2){
//         return 2;
//     }
//     else{
//         return climbStairs(n-1)+climbStairs(n-2);
//     }
// }



// �ϥΰʺA�W���A�ɶ������׸���
int climbStairs(int n){
    vector<int> arr(n+1);
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2; i<=n; i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    return arr[n];
}

int main(){

    int n = 0, count=0;
    cin >> n;
    count = climbStairs(n);
    cout << count;
    return 0;
}