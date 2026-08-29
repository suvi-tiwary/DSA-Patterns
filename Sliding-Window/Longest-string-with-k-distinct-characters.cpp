#include<iostream>
#include<climits>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    string word = "aeeeuoia";
    int low =0;
    int high =0;
    int size = sizeof(word)/sizeof(word[0]);
    int res=INT_MIN;
    unordered_map<char,int> freq;
    int k=3;



    for (int high=0; high<size; high++){
        freq[word[high]]++;
        while(freq.size()>k){
           freq[word[low]]--;
           if(freq[word[low]]==0){
            freq.erase(word[low]);
           }
           low++;
        }
        if(freq.size()==k){
            res=max(res,high-low+1);
        }
    }

    cout << "result : " << res;
    return 0;
}