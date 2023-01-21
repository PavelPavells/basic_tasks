#include <iostream>

using namespace std;

void first_task()
{
  const int MAX_VALUE = 9999;
  const int MIN_VALUE = 0;

  int enter_number = 0;

  cout << "Input random value during 1 and 9999..." << endl;
  cin >> enter_number;

  if (enter_number < MIN_VALUE || enter_number > MAX_VALUE)
  {
    cout << "Error number. You should input value during 1 and 9999";
  }
  else
  {
    cout << "Your input: " << endl;

    if ((enter_number / 1000) % 10 == 1) cout << "One thousand ";
    else if ((enter_number / 1000) % 10 == 2) cout << "Two thousand ";
    else if ((enter_number / 1000) % 10 == 3) cout << "Three thousand ";
    else if ((enter_number / 1000) % 10 == 4) cout << "Four thousand ";
    else if ((enter_number / 1000) % 10 == 5) cout << "Five thousand ";
    else if ((enter_number / 1000) % 10 == 6) cout << "Six thousand ";
    else if ((enter_number / 1000) % 10 == 7) cout << "Sevent thousand ";
    else if ((enter_number / 1000) % 10 == 8) cout << "Eight thousand ";
    else if ((enter_number / 1000) % 10 == 9) cout << "Nine thousand ";

    if ((enter_number / 100) % 10 == 1) cout << "one hundred ";
    else if ((enter_number / 100) % 10 == 2) cout << "two hundred ";
    else if ((enter_number / 100) % 10 == 3) cout << "three hundred ";
    else if ((enter_number / 100) % 10 == 4) cout << "four hundred ";
    else if ((enter_number / 100) % 10 == 5) cout << "five hundred ";
    else if ((enter_number / 100) % 10 == 6) cout << "six hundred ";
    else if ((enter_number / 100) % 10 == 7) cout << "seven hundred ";
    else if ((enter_number / 100) % 10 == 8) cout << "eight hundred ";
    else if ((enter_number / 100) % 10 == 9) cout << "nine hundred ";

    if ((enter_number / 10) % 10 == 1)
    {
      if ((enter_number / 10) % 10 == 0) cout << "ten dollars ";
      else if ((enter_number / 10) % 10 == 1) cout << "eleven dollars ";
      else if ((enter_number / 10) % 10 == 2) cout << "twelve dollars ";
      else if ((enter_number / 10) % 10 == 3) cout << "thirteen dollars ";
      else if ((enter_number / 10) % 10 == 4) cout << "fourteen dollars ";
      else if ((enter_number / 10) % 10 == 5) cout << "fifteen dollars ";
      else if ((enter_number / 10) % 10 == 6) cout << "sixteen dollars ";
      else if ((enter_number / 10) % 10 == 7) cout << "seventeen dollars ";
      else if ((enter_number / 10) % 10 == 8) cout << "eighteen dollars ";
      else if ((enter_number / 10) % 10 == 9) cout << "nineteen dollars ";
    }

    if ((enter_number / 10) % 10 == 2) cout << "twenty ";
    else if ((enter_number / 10) % 10 == 3) cout << "thirty ";
    else if ((enter_number / 10) % 10 == 4) cout << "fourty ";
    else if ((enter_number / 10) % 10 == 5) cout << "fifty ";
    else if ((enter_number / 10) % 10 == 6) cout << "sixty ";
    else if ((enter_number / 10) % 10 == 7) cout << "seventy ";
    else if ((enter_number / 10) % 10 == 8) cout << "eighty ";
    else if ((enter_number / 10) % 10 == 9) cout << "ninty ";

    if ((enter_number / 10) % 10 != 1)
    {
    if (enter_number % 10 == 0) cout << "dollars";
    else if (enter_number % 10 == 1) cout << "and one dollar";
    else if (enter_number % 10 == 2) cout << "and two dollars ";
    else if (enter_number % 10 == 3) cout << "and three dolalrs ";
    else if (enter_number % 10 == 4) cout << "and four dollars ";
    else if (enter_number % 10 == 5) cout << "and five dollars ";
    else if (enter_number % 10 == 6) cout << "and six dollars ";
    else if (enter_number % 10 == 7) cout << "and seven dollars ";
    else if (enter_number % 10 == 8) cout << "and eight dollars ";
    else cout << "and nine dollars ";
    }
  }

  cout << endl << endl;
};

void second_task()
{
  int number_of_finger = 0;

  cout << "Input number of your finger" << endl;
  cin >> number_of_finger;

  switch(number_of_finger)
  {
    case 1: cout << "Big finger" << endl;
    break;
    case 2: cout << "Index finger" << endl;
    break;
    case 3: cout << "Middle finger" << endl;
    break;
    case 4: cout << "Ring finger" << endl;
    break;
    case 5: cout << "Pinky finger" << endl;
    default: cout << "Are you human? Input true value" << endl;
  }
}

void third_task()
{
  int num_one, num_two, your_answer, result;
  cout << "Input two integers values..." << endl;
  cin >> num_one;
  cin >> num_two;
  cout << "Input multiply result of your values" << endl;
  cin >> your_answer;

  result = num_one * num_two;

  if (result == your_answer)
  {
    cout << "Your right!" << endl;
  }
  else 
  {
    cout << "Error!" << endl;
    cout << "Correct answer: " << result << endl;
  }
}

int main()
{
  setlocale(LC_ALL, "en");

  first_task();
  second_task();
  third_task();

  return 0;
}
