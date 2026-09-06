#include<iostream>
using namespace std;

int main(){

    int arr[]={-2,5,-7,3};
    int n= sizeof(arr)/sizeof(arr[0]);

    int current_max=arr[0];
    int current_min=arr[0];
    int res_max = arr[0]; 
    int res_min = arr[0]; 
    int ans =0;

    for(int i=0;i<n;i++){
      current_max=max(current_max+arr[i],arr[i]);
      current_min=min(current_min+arr[i],arr[i]);

      res_max= max(res_max,current_max);
      res_min=min(res_min,current_min);

     ans = max(res_max,abs(res_min));

    }

    cout << "ans : " << ans << endl;

    return 0;
}