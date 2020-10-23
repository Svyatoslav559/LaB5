#pragma hdrstop
#include "Header.h"
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
using namespace std;
Uchenic::Uchenic() {
	cout << "Input class:"; cin >> cl;
	cout << "Input age:"; cin >> age;
}
void Uchenic::Show()
{
	cout << "class:"; cout << cl;
	cout << "age:"; cout << age;
}
Shkolyar::Shkolyar() {
	cout << "Input corpus:"; cin >> corpus;
}
void Shkolyar::Show()
{
	cout << "corpus:"; cout << corpus;
}
Student::Student() {
	cout << "Input gruppy:"; cin >> group;
}
void Student::Show()
{
	cout << "gruppa:"; cout << group;
}
bool Uchenic::Checking() {
	//- Проверка, не ввели ли отрицательное число ?
	if ((cl > 0) && (age > 0))
		return true; else return false;
}
void Uchenic::MoveTo(int cl1, int age1){
	if (!Checking()) { cout << "Nado podrosti"; }
}

bool Shkolyar::Checking()
{
	if ((cla > 0) && (agea > 0))
		return true; else return false;
}
int main() {
	Uchenic Spis1;
	int n1;
	Shkolyar Spis2;
	int n2;
	Student Spis3;
	int n3;
	cout << "Skolko uchenikov : ";
	Spis1 = new Uchenic[n1];
	Checking(Spis1, n1);
	delete[] Spis1;
	cout << "Skolko shkolyarov : ";
	Spis2 = new Shkolyar[n2];
	Checking(Spis2, n);
	delete[] Spis2;
	cout << "Skolko studentov : ";
	Spis3 = new Student[n3];
	Checking(Spis3, n);
	delete[] Spis3;
	cout << "Press any key!";
	while (!_kbhit());
	return 0;
}
