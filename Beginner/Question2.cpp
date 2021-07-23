/*
**********************************************************
✥ Title  :- Enormous Input Test
✥ Author :- Gautam Khatter
✥ Date   :- 23 July 2021
**********************************************************
✥ Link   :- https://www.codechef.com/problems/INTEST
**********************************************************
*/

#include <iostream>

int main() {
  int n, k;
  int count = 0;
  std::cin >> n >> k;
  for (int i = 0; i < n; i++) {
    long long int t;
    std::cin >> t;
    if (t % k == 0) {
      count++;
    }
  }
  std::cout << count;
  return 0;
}
