#include <iostream>

using namespace std;

int main() {
  int x = 0;
  cout << "Input number: " << endl;
  cin >> x; 
  if(x < 2) cout << "This is not a prime number" << endl;
  else {
    bool iP = true;
    for(int k = 2; k <= x / 2; ++k) {
      if(x % k == 0) iP = false;
    }
    if(iP) cout << "This is a prime number!" << endl;
    else cout << "This is not a prime number!" << endl;
  }
}
