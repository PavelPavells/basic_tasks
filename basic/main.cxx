#include <iostream>

using namespace std;

void first_task()
{
  int choc_bar = 5;
  int coffee = 2;
  int package_milk = 3;

  float chock_bar_price = 2.85;
  float coffee_price = 4.75;
  float milk_price = 2.20;

  float buy_sum = (choc_bar * chock_bar_price) + (coffee * coffee_price) + (package_milk * milk_price);

  cout << "Purchase sum = " << buy_sum << endl;
}

void second_task()
{
  int a = 10;
  int b = a + 3;
  int c = a + b;

  cout << "a = " << a << "\n" << "b = " << b << "\n" << "c = " << c << endl;
}

void third_task()
{
  int cups, spoons, saucers = cups;
  int amount = cups + spoons + saucers;

  cout << "Total " << amount << " items" << endl;
}

int main()
{
  setlocale(LC_ALL, "en");

  first_task();
  second_task();
  third_task();

  return 0;
};