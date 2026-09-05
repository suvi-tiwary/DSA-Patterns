#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int arr[]={2,-3,4,5,6,-7};
    int n= sizeof(arr)/sizeof(arr[0]);

    int current = arr[0];
    int res = INT_MIN;
    int noDeletion = arr[0];
    int oneDeletion= 0;

    for (int i=1;i<n;i++){
         
        // No power used 
        int v1 = arr[i];
        int v2 = noDeletion+arr[i];

         // Power used 

        int v3 = oneDeletion+arr[i];
        int v4 = noDeletion;
       
        res = max(max(v1,v2),max(v3,v4));
        noDeletion=max(v1,v2);
        oneDeletion=max(v3,v4);

    }

    cout << "Largest sum is : " << res << endl ;
    
    return 0;
}