
#include <iostream>

using namespace std;

enum MapState
{
  START = 1,
  END   = 2,
  WALL  = 3,
};

typedef struct Node
{
  int x;
  int y;
  int f;
  int g;
  int h;

  Node* parent = NULL;

  //set data member as zero
  void resize() { memset(this, 0, sizeof(*this)); }

}Node;

int g_map[5][7] = {0}; //map data

//initial map
void init_map()
{
  memset(&g_map, 0, sizeof(g_map));

  g_map[2][1] = START;
  g_map[2][5] = END;
  
  for (int i=1; i<=3; i++) {
    g_map[i][3] = WALL;
  }
}

//pathfinding

//print map
void print_map()
{
  for (int i=0; i<5; i++) {
    for (int j=0; j<7; j++) {
      cout << g_map[i][j] << " ";
    }
    cout << endl;
  }
}

int main(int argc, char** argv)
{

  init_map();

  //todo
  //path finding

  print_map();

  return 0;
}
