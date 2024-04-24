#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int t, _t=0, x, _x=0, y, _y=0;
  for (int i=0;i<N;i++) {
    cin >> t >> x >> y;
    int tmp = (t-_t)-abs(x-_x)-abs(y-_y);
    if (tmp < 0 || tmp%2 == 1) {
      cout << "No";
      return 0;
    }
    _t = t;
    _x = x;
    _y = y;
  }
  cout << "Yes";
}