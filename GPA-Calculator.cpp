
#include <iostream>
#include<cstring>
using namespace std;
class gpa {
private:
	double creditH[25];
	string grade;
	string gradeList[20];
	double gpa;
	double credit = 0;
	double sum = 0;
public:
	int number_of_subjects;
	void enterGrade();
	void evaluate();
	float TotalGpa();
};
void gpa::enterGrade()
{
	for (int i = 0; i < number_of_subjects; i++)
	{
		cout << "Please enter the grade of " << i + 1 << " subject:";
		cin >> gradeList[i];
		cout << "Please enter the credit hour of " << i + 1 << " subject:";
		cin >> creditH[i];
		credit = credit + creditH[i];
	}
	
}
void gpa::evaluate()
{	for (int i = 0; i < number_of_subjects; i++)
	{
		grade = gradeList[i];
		if (grade[0] == 'A' && grade[1]=='\0')
		{
			gpa = (4 * creditH[i]);
			sum = sum + gpa;
		}
		else if (grade[0] =='A' && grade[1]=='+')
		{
			gpa = (4 * creditH[i]);
			sum = sum + gpa;
		}
		else if (grade[0] == 'A' && grade[1]=='-')  {
			gpa = 3.7 * creditH[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'B' && grade[1] == '+') {
			gpa = 3.3 * creditH[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'B' && grade[1]=='\0') {
			gpa = 3.0 * creditH[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'B' && grade[1] == '-') {
			gpa = 2.7 * creditH[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'C' && grade[1] == '+') {
			gpa = 2.3 * creditH[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'C' && grade[1] == '\0') {
			gpa = 2.0 * creditH[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'C' && grade[1] == '-') {
			
			gpa = 1.7 * creditH[i];
			sum = sum + gpa;
		}
			else if (grade[0] == 'D' && grade[1]=='+') {
			gpa = 1.3 * creditH[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'D' && grade[1] == '\0'){
			gpa = 1.0 * creditH[i];
			sum = sum + gpa;
		}
		else if (grade[0] == 'F') {
			gpa = 0.0 * creditH[i];
			sum = sum + gpa;
		}
	}
}
float gpa::TotalGpa()
{
	float total=(float)sum / credit;
	return total;
}
int main()
{
       gpa cg
	cout << "Please enter the number of subjects of the current semester in which you are studying: ";
	cin >> g.number_of_subjects;
	g.enterGrade();
	g.evaluate();
	double totalGpa = g.TotalGpa();
	cout << "Your total gpa is " << totalGpa;
	return 0;
}
