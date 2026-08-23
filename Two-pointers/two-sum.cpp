#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,5,7,8,9};
    int low=0;
    int high= (sizeof(arr)/sizeof(arr[0]))-1;
    int target=12;
    int sum =0;

    while(low<high){
        sum=arr[low]+arr[high];
        if(sum<target){
            low++;
        }
        else if(sum>target){
            high--;
        }
        else{
            cout << "The pair of the number is : " << arr[low] << "and" << arr[high];
            break;
        }
    }
    
    return 0;
}