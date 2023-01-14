#include <iostream>

using namespace std;

void first_task()
{
  int a;
  double b;
  char c;
  long long d;

  cout << "Input integer value..." << endl;
  cin >> a;

  cout << "Input double value..." << endl;
  cin >> b;

  cout << "Input character..." << endl;
  cin >> c;

  cout << "Input big value" << endl;
  cin >> d;

  cout << "All your values:" << endl;
  cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
};

void second_task()
{
  char ch_one;
  char ch_two;
  char ch_three;
  char ch_four;
  char ch_five;

  cout << "Please input five latin characters..." << endl;

  cin >> ch_one >> ch_two >> ch_three >> ch_four >> ch_five;

  cout << "Your word is " << ch_one << ch_two << ch_three << ch_four << ch_five << endl;
};

void third_task()
{
  int x;
  int y;

  cout << "Please input two numbers..." << endl;

  cin >> x >> y;

  int multiple = x * y;
  int sum = x + y;
  int difference = x - y;
  int mean_numbers = (x + y) / 2;

  cout << "Multiple result: " << multiple << endl;
  cout << "Sum result: " << sum << endl;
  cout << "Difference result: " << difference << endl; 
  cout << "Arithmetic mean: " << mean_numbers << endl;
}

int main()
{
  setlocale(LC_ALL, "en");

  first_task();
  second_task();
  third_task();

  return 0;
}