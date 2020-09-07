#include <iostream>
#include <cstring>
using namespace std;
 
#define INF 9999

#define V 5 

 int G[V][V] = {    
    {0, 3, 0, 3, 0},
    {3, 0, 0, 0, 4},
    {0, 0, 0, 2, 1},
    {3, 3, 2, 0, 0},
    {0, 4, 1, 0, 0}};

int main () {
int num_edge;           
 
  
  int mst_vertex[V];

  memset (mst_vertex, false, sizeof (mst_vertex));
 
  num_edge = 0;
 
  mst_vertex[0] = true;
   int x;            //  row 
  int y;            //  col 
 
  
  cout<<"The Minimum Spanning Tree as per Prim's Algorithm:"<<endl;
  cout << "Edge" << " : " << "Weight";
  cout << endl;
  while (num_edge < V - 1) {
 
   //Prim's algorithm code
int min = INF;
    x = 0;
    y = 0;
 
for (int i = 0; i < V; i++) {
if (mst_vertex[i]) {
for (int j = 0; j < V; j++) {
if (!mst_vertex[j] && G[i][j]) { 
if (min > G[i][j]) {
min = G[i][j];
                      x = i;
                      y = j;
                  }
             }
          }
        }
      }
cout << x <<  " - " << y << " :  " << G[x][y];
cout << endl;
mst_vertex[y] = true;
num_edge++;
    }
 
return 0;
}
