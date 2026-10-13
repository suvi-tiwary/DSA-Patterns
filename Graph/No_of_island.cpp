#include<iostream>
#include<vector>
using namespace std;


bool isvalid(int i,int j, int n,int m){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    else{
        return true;
    }
}

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
void rotten_oranges(vector<vector<int,int>>&a,int n,int m){
    int fresh=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             if(a[i][j]==1){
                fresh++;
             }
             for(int k=0;k<4;k++){
                row=
             }
        }
      }
}