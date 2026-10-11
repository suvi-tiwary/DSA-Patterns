#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(vector<vector<int>>&adj,vector<int>&res,int node,vector<int>&vis){
    queue<int>q;
    q.push(node);
    vis[node]=1;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        res.push_back(front);
        for(int i=0;i<adj[front].size();i++){
            int neigh=adj[front][i];
            if(vis[neigh]==0){
                q.push(neigh);
                vis[neigh]=1;
            }
        }
    }
}

int main(){
    vector<vector<int>>adj={
        {2,3,1},{0},{0,4},{0},{2}
    };
    int n= adj.size();
    vector<int>vis(n,0);
    vector<int>res;


    bfs(adj,res,0,vis);
    for(int node:res){
        cout << node << " " ;
    }

    return 0;
}