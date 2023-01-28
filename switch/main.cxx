#include <iostream>

using namespace std;

void first_task()
{
  int day = 0;
  cout << "Hello, is's your personal calendar" << endl;
  cout << "Please, input number day of week, for example 1, 2, 3..." << endl;

  cin >> day;
  
  do {
    cout << "Please, input correct number 1...7" << endl;
    cin >> day;
  } while (day < 1 || day > 7);

  switch(day)
  {
    case 1:
      cout << "Monday, 8.00AM - Work\t7.00PM - Trainee" << endl;
      break;
    case 2:
      cout << "Tuesday, 8.00AM - Work" << endl;
      break;
    case 3:
      cout << "Wednesday, 8.00AM - Work\t Grandma B-day" << endl;
      break;
      
    case 4:
      cout << "Thursday, 8.00AM - Work\t7.00PM - Swimming Pool" << endl;
      break;
    case 5:
      cout << "Friday, 8.00AM - Work\t7.00PM - Courses" << endl;
      break;
    case 6:
      cout << "Saturday, Reading Book\tTrainee" << endl;
      break;
    case 7:
      cout << "Sunday, Reading Book\tTrainee" << endl;
      break;
    default: cout << "Something went wrong" << endl;
  }
}

void second_task()
{
  char answer;
  bool is_correct_char = true;

  cout << "Input character. A, B, C, D or E..." << endl;

  do {
    is_correct_char = false;
    cin >> answer;

    switch (answer)
    {
    case 'A':
    case 'a':
      cout << "Trinitat Nova Station" << endl;
      cout << "Travel time - 15 minutes." << endl;
      break;
    case 'B':
    case 'b':
      cout << "Casa de l’Aigua Station" << endl;
      cout << "Travel time - 15 minutes." << endl;
      break;
    case 'C':
    case 'c':
      cout << "Torre Baro Vallbona Station" << endl;
      cout << "Travel time - 15 minutes." << endl;
      break;
    case 'D':
    case 'd':
      cout << "Ciutat Meridiana Station" << endl;
      cout << "Travel time - 15 minutes." << endl;
      break;
    case 'E':
    case 'e':
      cout << "Can Cuias Station" << endl;
      cout << "Travel time - 15 minutes." << endl;
      break;
    default:
      cout << answer << " - Incorrect input! " << endl;
      cout << "Choose correct characters: A,B,C,D,E" << endl;
      break;
    }
    is_correct_char = true;
  } while (is_correct_char);
}


int main()
{
  setlocale(LC_ALL, "en");

  first_task();
  second_task();

  return 0;
}
