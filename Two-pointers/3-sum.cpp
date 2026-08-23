#include<iostream>
using namespace std;
#include <vector>
#include <tuple>

int main(){

    int arr[]={1,1,2,3,4,4,5,7,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target = 11;
    int low = 1;
    int high = size-1;
    vector<tuple<int,int,int>> result;
   
    for(int i=0;i<size-2;i++){
        low=i+1;
        high=size-1;

        if(i > 0 && arr[i] == arr[i-1]) {
        continue;
          }


        while(low<=high){
            int sum = arr[low]+arr[high]+arr[i];
            if(sum==target){
              result.push_back({arr[low],arr[high],arr[i]});
              while(arr[low]==arr[low+1]){
                low++;
              }
              while(arr[high]==arr[high-1]){
                high--;
              }

              low++;
              high--;
            }
            else if(sum<target){
                low++;
            }
            else{
                high--;
            }

        }
}

for(int j=0;j<result.size();j++){
  cout << get<0>(result[j]) << "+" << get<1>(result[j]) << "+" << get<2>(result[j]) << endl;
}

    return 0;
}