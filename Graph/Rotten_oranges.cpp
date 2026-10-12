#include<iostream>
#include<vector>
using namespace std;
#include<queue>


  int x[4]={-1,1,0,0};
  int y[4]={0,0,-1,1};
bool isvalid(int i,int j, int m, int n){
    if(i<0 and i>n and j<0 and j>m){
        return false;
    }
    else{
        return true;
    }
}
void rotten_oranges(vector<vector<int>>&a){
  int n=a.size();
  int m=a[0].size() ; // columns
  queue<pair<int,int>> q;
  int fresh =0;
  int time=0;

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i][j]==1){
            fresh++;
        }
        else if(a[i][j]==2){
            q.push({i,j});
            a[i][j]=-2;
        }
    }
  }

  while(!q.empty() and fresh>0){
     n=q.size();
     while(n--){
    pair <int,int> p=q.front();
    q.pop();
    int r=p.first();
    int c=p.second();
    for(int k=0;k<4;k++){
        int row = r+
    }
    if(isvalid(r,c,m,n))

     }
  }
   
}