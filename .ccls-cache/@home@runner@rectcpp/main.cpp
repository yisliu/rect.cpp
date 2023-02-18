#include <iostream>
using namespace std;

int main() {
  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  //find space overlapped
  // int width = min(x1, x2)-max(x1, x2);
  // int length = min(y1, y2)-max(y1, y2);
  // int total = width*length;
  // int total2 = x1*x2;
  // cout<<total-total2;
  //find area
  int width = max(x1, x2)-min(x1, x2);
  int length = max(y1, y2)-min(y1, y2);
  int total = width*length;
  int width2 = max(x3, x4)-min(x3, x4);
  int length2 = max(y3, y4)-min(y3, y4);
  int total2 = width2*length2;
  int total3 = max(total2, total)-min(total2, total);
  cout<<max(total3, total);
  /*
sample input:
2 1 7 4
5 1 10 3
sample output:
15
*/
}