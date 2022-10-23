
#include <iostream>
#include<cstring>
using namespace std;
class GPA {						// Class for calculating gpa 
private:
	double creditHours[25];				// Store the credit hours of student	
	string grade = '';					// variable for storing the grade of student in string variable	
	string gradeList[20];				// To get the list of grades
	double gpa = 0.0;
	double total_credits = 0;
	double sum = 0;
public:
	int number_of_subjects;
	void enterGrade();
	void evaluate();				// Compute the grades of student
	float TotalGpa();				// Computes the gpa of enter grades
};
void GPA::enterGrade()
{
	for (int i = 0; i < number_of_subjects; i++)			// Run for number of subjects time
	{
		cout << "Please enter the grade of " << i + 1 << " subject:";
		cin >> gradeList[i];								// input the enter grade in gradeList
		if (cin.fail())
		{
			cout("ERROR\n");
			cin.clear();
			cin.ignore(256,'\n');
			cout << "Please enter the grade of " << i + 1 << " subject:";
			cin >> gradeList[i];
		}
		cout << "Please enter the credit hour of " << i + 1 << " subject:";
		cin >> creditHours[i];								// input the entered credit hours in creditH
		if (cin.fail())
		{
			cout("ERROR\n");
			cin.clear();
			cin.ignore(256,'\n');
			cout << "Please enter the credit hour of " << i + 1 << " subject:";
			cin >> creditHours[i];
		}
		total_credits = total_credits + creditHours[i];							// add the creditH in credit
	}
	
}
void GPA::evaluate()
{	for (int i = 0; i < number_of_subjects; i++)
	{
		grade = gradeList[i];
		if (grade[0] == 'A' && grade[1]=='\0')				// Compute if grade entered is 'A' in capital format
		{
			gpa = (4 * creditHours[i]);					// calculate the gpa 
			sum = sum + gpa;
		}
		else if (grade[0] =='A' && grade[1]=='+')			// Compute if grade entered is 'A+' in capital format
		{
			gpa = (4 * creditHours[i]);
			sum = sum + gpa;
		}
		else if (grade[0] == 'A' && grade[1]=='-')  {			// Compute if grade entered is 'A-' in capital format
			gpa = 3.7 * creditHours[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'B' && grade[1] == '+') {			// Compute if grade entered is 'B+' in capital format
			gpa = 3.3 * creditHours[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'B' && grade[1]=='\0') {			// Compute if grade entered is 'B' in capital format
			gpa = 3.0 * creditHours[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'B' && grade[1] == '-') {			// Compute if grade entered is 'B-' in capital format
			gpa = 2.7 * creditHours[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'C' && grade[1] == '+') {			// Compute if grade entered is 'C+' in capital format
			gpa = 2.3 * creditHours[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'C' && grade[1] == '\0') {			// Compute if grade entered is 'C' in capital format
			gpa = 2.0 * creditHours[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'C' && grade[1] == '-') {			// Compute if grade entered is 'C-' in capital format
			
			gpa = 1.7 * creditHours[i];
			sum = sum + gpa;
		}
			else if (grade[0] == 'D' && grade[1]=='+') {		// Compute if grade entered is 'D+' in capital format
			gpa = 1.3 * creditHours[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'D' && grade[1] == '\0'){			// Compute if grade entered is 'D' in capital format
			gpa = 1.0 * creditHours[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'F') {					// Compute if grade entered is 'F' in capital format
			gpa = 0.0 * creditHours[i];	
			sum = sum + gpa;
		}
	}
}
float GPA::TotalGpa()
{
	float total=(float)sum / total_credits;			// Calculate the total gpa
	return total;
}
// driver program
int main()
{
       	GPA obectGPA;
	cout<<"***********************************************************************************************************"<<endl;
	cout<<"*******************************************GPA CALCULATOR**************************************************"<<endl;
	cout<<"***********************************************************************************************************"<<endl;
	cout << "Please enter the number of subjects including labs: ";
	cin >> obectGPA.number_of_subjects;
	
	// input error handled starts
	if (cin.fail())
	{
		cout("ERROR\n");
		cin.clear();
		cin.ignore(256,'\n');
		cout << "\nPlease enter the number of subjects including labs: ";
		cin >>obectGPA.number_of_subjects;
	}
	// input error handled closes
	
	obectGPA.enterGrade();
	obectGPA.evaluate();
	double totalGpa = obectGPA.TotalGpa();
	cout << "Your total gpa is: " << totalGpa;
	cout<<"***********************************************************************************************************"<<endl;
	cout<<"********************************************* Ending ******************************************************"<<endl;
	cout<<"***********************************************************************************************************"<<endl;
	return 0;
}
