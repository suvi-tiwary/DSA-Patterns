#include<iostream>
#include<vector>
using namespace std;

bool dfs(vector<vector<int>>&a,int node,int parent,vector<int>&vis){
    vis[node]=1;
    for(int i=0;i<a[node].size();i++){
          int neigh=a[node][i];
          if(vis[neigh]==0){
            dfs(a,neigh,node,vis);  
            return true;
          }
          if(vis[neigh]==1 and neigh!=parent){
            return true;
          }

    }
   
}
bool isCycle(int n,vector<vector<int>>&edges){
    vector<vector<int>> a(n);
    for(int i=0;i<edges.size();i++){
         int src=edges[i][0];
         int dest=edges[i][1];
         a[src].push_back(dest);  
         a[dest].push_back(src);
    }
 
     vector<int> vis(n,0);

     for(int k=0;k<n;k++){
        if(vis[k]==0){
            dfs(a,k,-1,vis);
            return true;
        }
     }
     return false;


}

int main(){
     int n = 4;

    vector<vector<int>> edges = {
        {0, 1},
        {1, 2},
        {2, 0},
        {2, 3}
    };

    cout << (isCycle(n, edges) ? "Cycle found" : "No cycle");
    return 0;
}