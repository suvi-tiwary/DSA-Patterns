#include <iostream>
using namespace std;

int main(){
   
    int arr[]={-2,4,-6,7};
    int n= sizeof(arr)/sizeof(arr[0]);

    int current_max= arr[0];
    int current_min= arr[0];
    int current= arr[0];
    int res = 1;

    for(int i=1;i<n;i++){
         current_max = max(current_max*arr[i],arr[i]);
         current_min = max(current_min*arr[i],arr[i]);

         current = max(current_max,current_min);
         res = max(res,current);
    }

    cout << "ans : " << res << endl;

    return 0;
}