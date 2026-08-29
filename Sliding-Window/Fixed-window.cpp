#include <iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={1,2,2,4,7};
    int target=8;
    int k=3;
    int low =0;
    int high = k-1;
    int sum =0;
    int n= sizeof(arr)/sizeof(arr[0]);
    int res=INT_MIN;

    for(int i=0;i<=high;i++){
        sum+=arr[i]; }

    while(high<n){
        res=max(res,sum);
        sum = sum-arr[low];
        low++;
        high++;
        if(high==n){
            break;
        }
        sum=sum+arr[high];

    } 
    cout << "result : " << res ;
    return 0;
}