#include<iostream>
using namespace std;

int main(){
    
    int arr[]={-2,-1,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);

    int current = arr[0];
    int res=arr[0];
    int start=0;
    int end=0;
    int tmpStart=0;

    for (int i=1;i<n;i++){
     if(current+arr[i]<arr[i]){
        current=arr[i];
        tmpStart=i;
     }
     else{
        current=current+arr[i];
     }

     if(current>res){
        res=current;
        start=tmpStart;
        end=i;
     }
      
    }

    for(int j=start;j<=end;j++){
        cout << arr[j]<< " ";
    }
    return 0;
}