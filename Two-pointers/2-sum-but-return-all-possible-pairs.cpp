#include <iostream>
using namespace std;
#include <vector>

int main(){
    int arr[]={1,1,1,2,2,2,3,3,3,4,4};
    int low = 0;
    int high = (sizeof(arr)/sizeof(arr[0]))-1;
    vector<pair<int,int>> result;
    int target=4;
    while(low<=high){
       int sum=arr[low]+arr[high];
        if(sum==target){
            result.push_back({arr[low],arr[high]});

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
    for(int i=0;i<result.size();i++){
        cout << result[i].first << "+" << result[i].second << "=" << target << endl ;
    }
    return 0;
}