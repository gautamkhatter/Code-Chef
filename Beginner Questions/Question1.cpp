/*
**********************************************************
✥ Title  :- ATM Machine Problem
✥ Author :- Gautam Khatter
✥ Date   :- 23 July 2021
**********************************************************
✥ Link   :- https://www.codechef.com/problems/HS08TEST
**********************************************************
*/


#include <iostream>


int main() {
  int amount;
  double balance, remainingBalance;
  std::cin >> amount;
  std::cin >> balance;
  if(amount % 5 == 0) {
    if(amount < balance && (amount + 0.5) <= balance) {
      remainingBalance = balance - amount - (0.5);
      std::cout << remainingBalance << std::endl;
    }else {
      std::cout << balance << std::endl;
    }
  }else {
    std::cout << balance << std::endl;
  }
  return 0;
}