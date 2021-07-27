/*
****************************************************************
✥ Title  :- Food Chain
✥ Author :- Gautam Khatter
✥ Date   :- 25 July 2021
✥ Contest:- Starters7(Div 3)
****************************************************************
✥ Link   :- https://www.codechef.com/START7C/problems/FODCHAIN
****************************************************************
*/

#include <iostream>

int main() {
  int testcases;
  std::cin >> testcases;
  for (int i = 0; i < testcases; i++) {
    int E, K;
    std::cin >> E >> K;
    int level = 0;
    while(E) {
      level++;
      E = E/K;
    }
    std::cout << level << std::endl;
  }
    return 0;
}