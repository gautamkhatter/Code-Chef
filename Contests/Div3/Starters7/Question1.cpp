/*
****************************************************************
✥ Title  :- Chess Format
✥ Author :- Gautam Khatter
✥ Date   :- 25 July 2021
✥ Contest:- Starters7(Div 3)
****************************************************************
✥ Link   :- https://www.codechef.com/START7C/problems/CHSFORMT
****************************************************************
*/

#include <iostream>

int main() {
  int testcases, a, b, sum;
  std::cin >> testcases;
  for (int i = 0; i < testcases; i++) {
    std::cin >> a >> b;
    sum = a + b;
    if(sum < 3) {
      std::cout << 1 << std::endl;
    }else if(sum >= 3 && sum <= 10) {
      std::cout << 2 << std::endl;
    }else if(sum >= 11 && sum <= 60) {
      std::cout << 3 << std::endl;
    }else {
      std::cout << 4 << std::endl;
    }
  }
    return 0;
}