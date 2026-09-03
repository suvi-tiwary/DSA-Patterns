#include<iostream>
using namespace std;

int main(){
    
    int arr[]={2,-1,5,4};
    int best_ending = arr[0];
    int ans=arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){
        int v1 = best_ending+arr[i];
        int v2 = arr[i];
        best_ending= max(v1,v2);
        ans = max(ans,best_ending);
    }

    cout << "max sum of the subarray is : " << ans << endl;
    return 0;
}