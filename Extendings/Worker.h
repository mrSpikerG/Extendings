#pragma once
#include "Human.h"

//добавляем public чтобы получить доступ ко всем функциям
class worker : public Human{
//Переменные которые унаследуют наследники
protected:
	int salary;
public:
	//наследуем конструктор человека
	worker(int salary,char* name,char* gender,int age):Human(name,gender,age)
	{
		this->salary = salary;
	}

	//геттер и сеттер
	int getSalary() {
		return salary;
	}
	void setSalary(int salary) {
		this->salary = salary;
	}
};