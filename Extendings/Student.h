#pragma once
#include "schoolBoy.h"

//добавляем public чтобы получить доступ ко всем функциям
class student : public schoolBoy {
	//Переменные которые унаследуют наследники
protected:
	// Пусто 
	// Пусто :(
public:

	student(int* marks, size_t size, char* name, char* gender, int age) : schoolBoy(name, gender, age)
	{
		//работает присвоение даже при том, что данные переменные не указаны ни в protected, ни в private
		//*и это даже не фальшивка через define* 
		this->size = size;
		for (int i = 0; i < this->size; i++) {
			this->marks[i] = marks[i];
		}
	}

};