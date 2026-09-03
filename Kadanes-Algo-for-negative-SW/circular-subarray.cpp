#include<iostream>
using namespace std;

int main(){
    
    int arr[]={2,-1,5,7};
    int n= sizeof(arr)/sizeof(arr[0]);

    int currentMax = arr[0];
    int resMax=arr[0];

    int currentMin = arr[0];
    int resMin = arr[0];

    int total_sum =0;
    int res=0;

    for (int i=1;i<n;i++){
      currentMax = max(currentMax+arr[i],arr[i]);
      resMax=max(resMax,currentMax);

      currentMin=min(currentMin+arr[i],arr[i]);
      resMin=min(resMin,currentMin);

      total_sum +=arr[i];
    }

     int circular_sum = total_sum-resMin;
     res=max(resMax,circular_sum);

    cout << "circular kadane algo : " << res << endl;
    return 0;
}