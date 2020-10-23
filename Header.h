//***************** class Uchenic **************************
class Uchenic {
	int cl, age;
public:
	int GetCL() { return cl; }
	int GetAGE() { return age; }
	void SetCL(int cl1) { cl = cl1; }
	void SetAGE(int age1) { age = age1; }
	Uchenic(int clll = 0, int ageee = 0) { cl = clll; age = ageee; }
	virtual void Show();
	virtual bool Checking();
	// Проверка, не ввели ли отрицательное число ?
	virtual void MoveTo(int cl1, int age1);
};
//**************class Shkolyar **************************
class Shkolyar :public Uchenic {
	int cla, agea, schoolnumber, corpus;
public:
	int GetCLA() { return cla; }
	int GetAGEA() { return agea; }
	void SetCLA(int cla1) { cla = cla1; }
	void SetAGEA(int agea1) { agea = agea1; }
	Shkolyar(int a = 0, int b = 0, int c = 0) :Uchenic(a, b)
	{
		corpus = c;
	}
	virtual void Show();
	virtual bool Checking();
	// Проверка, не ввели ли отрицательное число ? 
};
//**************** class Student ************************
class Student :public Shkolyar {
	int group;
public:
	int Getgroup() { return group; }
	void Setgroup(int group1) { group = group1; }
	Student(int CLA = 0, int AGE = 0, int CORPUS = 0, int GRUPPA = 0) :Shkolyar(CLA, AGE, CORPUS, GRUPPA)
	{
		group=GRUPPA;
	}
	void Show();
	bool Checking();
	// Проверка, не ввели ли отрицательное число ?
};
//****************** class MyCylinder ********************
bool ExistFigure = false;//Если ExistFigure==false,  объект не изображался
Uchenic *Figure;//- Указатель на базовый класс MyPoint.
