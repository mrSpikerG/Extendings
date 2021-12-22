#include <iostream>
#include "Student.h"
#include "Worker.h"
using namespace std;
int main()
{
	
	cout << "Input name: ";
	char* name = new char[100];
	gets_s(name, 100);

	cout << "Input gender: ";
	char* gender = new char[100];
	gets_s(gender, 100);
	
	cout << "Input age: ";
	int age;
	cin >> age;
	cin.ignore();

	//Конструктор наследующий конструктор Human
	schoolBoy *Lesha = new schoolBoy(name,gender,age);

	//Используем функцию Human через schoolboy
	cout<<"\n"<<Lesha->isMan();



	//Конструктор наследующий конструктор schoolboy, который наследует конструктор Human
	student* Misha = new student(name, gender, age);
	
	//Используем функцию Human через student
	cout << "\n" << Lesha->getGender();


	cout << "\nInput salary: ";
	int salary;
	cin >> salary;
	cin.ignore();
	//Конструктор наследующий конструктор Human 
	//fun facts: если навести на конструктор можно увидеть комментарий оставленный мной в Worker.h
	worker* Grisha = new worker(salary,name, gender, age);

	//Просто функция работника 
	cout<<Grisha->getSalary();



}

