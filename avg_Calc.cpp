
#include <iostream>
using namespace std;

int main()
{
	int grade, sum = 0;

	for (int i = 1; i < 4;i++) {
		do {
			cout << "Enter Grade "<< i<< ":"; cin >> grade;

		} while (grade < 1 || grade>5);
		sum += grade;
	}
	
	cout << "Sum = " << sum<<endl;
	cout << "Average = " << (float)sum / 3.0;

	system("pause>0");
}
