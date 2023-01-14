#include <iostream>

using namespace std;

void first_task()
{
  int n = 1234;

	cout << "The original number is " << n << endl;
	
	int rev = 0;
	
	while ( n != 0 ){
		rev = rev * 10;
		rev = rev + (n % 10);
		n = n / 10;
	}
	
	cout << "The reversed number is " << rev << endl;
};

void get_deposit_data()
{
  float deposit;
  int amount_months;
  float annual_rate = 5;
  int year_days = 365;
  int month_days = 30;

  cout << "Input your sum of deposit..." << endl;
  cin >> deposit;

  cout << "Enter the number of months you are going to keep your deposit..." << endl;
  cin >> amount_months;

  cout << "Calculation..." << endl;
  cout << "=======================================" << endl;

  float profit = deposit * (annual_rate / 100) / year_days * month_days;
  cout << "MONTHS PERCENTS: " << profit << "$" << endl;

  float all_income = profit * amount_months;
  cout << "INTEREST FOR THE ENTIRE TERM: " << all_income << "$" << endl;

  float total_amount = deposit + all_income;
  cout << "TOTAL PAYOUT AT THE END OF THE TERM: " << total_amount << endl;
};

int main()
{
  setlocale(LC_ALL, "en");

  first_task();
  get_deposit_data();

  return 0;

}