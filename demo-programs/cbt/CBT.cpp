#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "CBT.h"

using namespace std;

int main() {
  // four levels: max # of nodes = 2^4-1 = 15
  CompleteBinaryTree cbt(20);
  cbt.updateRoot('A'); // level 0; add the root
  cbt.print();
  cout << "size = " << cbt.getSize() << endl;
  cout << "maxSize = " << cbt.getMaxSize() << endl;

  cbt.updateLeftChild(0, 'B'); // level 1
  cbt.updateRightChild(0, 'C');
  cbt.updateRightChild(1, 'D'); // level 2
  cbt.updateLeftChild(2, 'E');
  cbt.updateRightChild(2, 'F');
  cbt.updateLeftChild(5, 'G'); // level 3
  cbt.updateLeftChild(6, 'H');
  cbt.updateRightChild(6, 'I');
  cbt.print();
  cout << "size = " << cbt.getSize() << endl;
  // update left child that doesn't exist
  cbt.updateLeftChild(15, 'Z');
  return 0;
}