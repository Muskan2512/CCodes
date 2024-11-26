#include <stdio.h>
#include "queue.c"

int graph[10][10]={0};

void addEdge(int u,int v){
  graph[u][v]=1;
  graph[v][u]=1;
}

void print(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      printf("%d ",graph[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void bfs(int vis[],int n,int node){
  vis[node]=1;
  enqueue(node);
  while(!isEmpty()){
    int node=dequeue();
    printf("%c ",(node+64));
     //traverse all the neighbours
    for(int j=1;j<=n;j++){
      if( !vis[j] ){
        vis[j]=1;enqueue(j);
      }
    }
  } 
}

int main() {
    int n,m;
    printf("Enter the number of nodes and edges:");
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
      int u,v;
      scanf("%d %d",&u,&v);
      addEdge(u,v);
    }
    // print(n);//print the adjacency list
    int vis[100]={0};
    int start=1;
    bfs(vis,n,start);
    return 0;
}