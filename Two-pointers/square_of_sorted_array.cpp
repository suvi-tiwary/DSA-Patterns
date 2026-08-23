#include <iostream>
using namespace std;

int main(){
    int arr[]={-7, -3, -1, 2, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res[size]; 
    int low = 0;
    int high = size-1;
    int idx =  size-1;
    
    while(low<=high ){
        if(abs(arr[low])>abs(arr[high])){

            res[idx]=arr[low]*arr[low];
            idx--;
            low++;
        }
        else{
             res[idx]=arr[high]*arr[high];
            idx--;
            high--;
        }
    }

    for(int i=0;i<size;i++){
        cout << res[i] << " ";
    }

    return 0;
}