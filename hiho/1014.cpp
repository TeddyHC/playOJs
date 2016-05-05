#include <iostream>
using namespace std;

#define MAX_NUM 26

enum NODE_TYPE{ //"COMPLETED" means a string is generated so far.
  COMPLETED,
  UNCOMPLETED
};

struct Node {
  enum NODE_TYPE type;
  char ch;
  int count;
  struct Node* child[MAX_NUM]; //26-tree->a, b ,c, .....z
};

int main()
{
    struct
}