#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int height, width;
	char symbol;
	cout << "Enter Height: "; cin >> height;
	cout << "Enter Width: "; cin >> width;
	cout << "Enter Symbol: "; cin >> symbol;
	cout << endl;
	for (int i = 0;i < height;i++) {
		for (int j=0; j<width;j++) {
			cout << setw(3) << symbol;
		}
		cout << " " << endl;
	}
	system("pause>0");
}
