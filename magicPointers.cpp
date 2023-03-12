#include <iostream>

using namespace std;

void magicPointerLogic (int * integerPointer) {
  *(integerPointer+2) = 0xff;
  return;
}

int main() {
  int n1 = 0xa5;
  int n2 = 0xa6;
  int n3 = 0xa7;
  cout << "n1:" << n1 << endl;
  cout << "n2:" << n2 << endl;
  cout << "n3:" << n3 << endl;

  int * p1 = &n1;
  int * p2 = &n2;
  int * p3 = &n3;

  cout << "p1 location in mem:" << p1 << endl;
  cout << "p1 value in mem:" << *p1 << endl;
  cout << "p2 location in mem:" << p2 << endl;
  cout << "p2 value in mem:" << *p1 << endl;
  cout << "p3 location in mem:" << p3 << endl;
  cout << "p3 value in mem:" << *p1 << endl;
  cout << "Time to experiment..." << endl;
  cout << "p3 moved in mem 2 spaces:" << p3+2 << endl;
  cout << "p3 moved in mem 1 space:" << p3+1 << endl;
  cout << "SO WHAT CAN WE DO WITH THIS?..." << endl;
  cout << "Value of n1:" << n1 << endl;
  cout << "Value of p1:" << *p1 << endl;
  cout << "Value of p3 moved 2 spaces in memory" << *(p3+2) << endl;

  cout << "Lets do some magic!" <<endl;
  magicPointerLogic(p3);
  cout << "p3 location in mem:" << p3 << endl;
  cout << "p3 value in mem:" << *p3 << endl;
  cout << "p1 location in mem:" << p1 << endl;
  cout << "p1 value in mem:" << *p1 << endl;

  // In conclusion if I know exactly where something is in memory, and I know where I am in memory I can access anything.

  return 0;
}