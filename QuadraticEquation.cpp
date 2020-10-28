#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Type number a: "; float a; cout << "\n";
  cin >> a;
  cout << "Type number b: "; float b; cout << "\n";
  cin >> b;
  cout << "Type number c: "; float c; cout << "\n";
  cin >> c;
  if(a == 0) {
    cout << "Invalid value! 'a' will never be 0!\n";
  } else {
    float delta = (b*b) - 4*a*c;
    if(delta < 0) {
      cout << "Equation doesn't have any roots!\n";
    } else if(delta == 0) {
      float x = (b*(-1)) / 2*a;
      cout << "Equation has repeated real solution of: "; cout << x; cout << "\n";
    } else {
      float x1 = (b*(-1) + sqrt(delta)) / (2*a);
      float x2 = (b*(-1) - sqrt(delta)) / (2*a);
      cout << "x1 = "; cout << x1; cout << "\n";
      cout << "x2 = "; cout << x2; cout << "\n"; 
    }
  }
  return 0;
}
