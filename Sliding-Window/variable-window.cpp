#include <iostream>
using namespace std;
#include <climits>

int main(){
    int arr[]={1,2,4,4};
    int target=8;
    int low=0;
    int high =0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum =0;
    int res = INT_MAX;

    while(high<size){
        sum = sum+arr[high];      // first hire karo 
        while(sum>=target){
            int len = high -low+1;
            res=min(res,len);                    // jb tak km ho fire karo 
            sum=sum-arr[low];
            low++;
        }
        high++;
    }
    cout << "result : " << res;
    return 0;
}