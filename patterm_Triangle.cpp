
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int height, width=0;
	char symbol;
	cout << "Enter Height: "; cin >> height;
	cout << "Enter Symbol: "; cin >> symbol;


	for (int i = 0; i < height;i++) {
		width++;
		for (int j = 0; j<width; j++) {
			cout << setw(3)<<symbol;
			
		}
		cout << endl;
	}

	system("pause>0");
}
