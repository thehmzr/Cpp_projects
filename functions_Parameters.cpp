#include <iostream>
#include<iomanip>
using namespace std;



void introduceMe(string name,string city,int age=0) {
	
	cout<<"My name is  "<<name<<"."<<endl;
	cout << "I am from " << city << "." << endl;
	if (age!=0)
		cout << "I am  " << age << " years old." << endl;
}

int main()
{
	cout << "print from main()" << endl;
	
	string name1, city1;
	int age1;

	cout << "Enter name: "; cin >> name1;
	cout << "Enter city: "; cin >> city1;
	cout << "Enter age: "; cin >> age1;
	system("cls");

	introduceMe(name1, city1, age1);

	
	system("pause>0");
}
