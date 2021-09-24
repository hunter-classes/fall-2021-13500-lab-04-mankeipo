#include "function.h"
#include <iostream>
using namespace std;
#include <string>

int main() {
  cout << "box(3,5): " << endl;
  cout << box(3,5);
  cout << "\n------------------\n";

  cout << "checkerbroad(11,6): " << endl;
  cout << checkerbroad(11,6);
  cout << "\n------------------\n";

  cout << "cross(8): " << endl;
  cout << cross(8);
  cout << "\n------------------\n";

  cout << "lowerTriangle(6): " << endl;
  cout << lowerTriangle(6);
  cout << "\n------------------\n";

  cout << "upperTriangle(7): " << endl;
  cout << upperTriangle(7);
  cout << "\n------------------\n";

  cout << "upsideDown(5,12): " << endl;
  cout << upsideDown(5,12);
  cout << "\n------------------\n";

  cout << "upsideDown(12,5): " << endl;
  cout << upsideDown(12,5);
  cout << "\n------------------\n";
  
  cout << "checkerbroad3(27,27): " << endl;
  cout << checkerbroad3(27,27);
  cout << "\n------------------\n";

  return 0;
}
