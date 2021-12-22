#pragma once
#include "Human.h"

//добавляем public чтобы получить доступ ко всем функциям
class schoolBoy : public Human {
	//Переменные которые унаследуют наследники
protected:
	int* marks;
	size_t size;
public:
	//У нас нет конструктора по умолчанию, поэтому такой конструктор не сработает :(
	//schoolBoy(){}

	//наследуем конструкторы Human 
	schoolBoy(char* name, char* gender, int age) : Human(name, gender, age)
	{
		marks = nullptr;
		size = 0;
	}

	//более полезный конструктор с наследованием
	schoolBoy(int* marks, size_t size, char* name, char* gender, int age) : Human(name, gender, age)
	{
		this->size = size;
		for (int i = 0; i < this->size; i++) {
			this->marks[i] = marks[i];
		}
	}
	
	void showMarks() {
		for (int i = 0; i < size; i++) {
			std::cout << i << ": " << marks[i];
		}
	}
};
