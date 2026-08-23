#include <iostream>
using namespace std;
#include <vector>
#include<tuple>


int main(){
    
    int arr[]={1,3,5,5,5,7,8,8,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high=size-1;
    int target = 12;
    int maxdiff = INT8_MAX;
    int result = 0;

    while(low<=high){
        
        int sum = arr[low]+arr[high];
        int diff = abs(sum-target);
        if(maxdiff>diff){
            maxdiff=diff;
            result = sum;
        }
        if(sum<target){
            low++;
        }
        else if(sum>target){
            high--;
        }
        else{
            return result;
        }
    }

    cout <<"sum : " << result << "with max difference " << maxdiff << endl;
    return 0;
}