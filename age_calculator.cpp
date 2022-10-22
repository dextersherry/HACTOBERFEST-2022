// c program for age calculator
#include<iostream>
using namespace std;

// function to calculate current age
void findAge(int current_date, int current_month,
			int current_year, int birth_date,
			int birth_month, int birth_year)
{
	// days of every month
	int month[] = { 31, 28, 31, 30, 31, 30,
					31, 31, 30, 31, 30, 31 };

	if (birth_date > current_date) {
		current_date
			= current_date + month[birth_month - 1];
		current_month = current_month - 1;
	}
  
	if (birth_month > current_month) {
		current_year = current_year - 1;
		current_month = current_month + 12;
	}

	// calculate date, month, year
	int calculated_date = current_date - birth_date;
	int calculated_month = current_month - birth_month;
	int calculated_year = current_year - birth_year;

	// print the present age
	printf("Present Age\nYears: %d Months: %d Days:"
		" %d\n",
		calculated_year, calculated_month,
		calculated_date);
}

// driver code to check the above function
int main()
{

	int current_date;
	int current_month;
	int current_year;
	cout<<"\n Enter current date (DD MM YYYY): ";
    cin>>current_date;
    cin>>current_month;
    cin>>current_year;


	int birth_date;
	int birth_month;
	int birth_year;
    cout<<"\n Enter Your Birth date (DD MM YYYY): ";
    cin>>birth_date;
    cin>>birth_month;
    cin>>birth_year;


	findAge(current_date, current_month, current_year,
			birth_date, birth_month, birth_year);
	return 0;
}
