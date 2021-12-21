#include <iostream>
#pragma once
class Human {

//Переменные которы не унаследуют наследники
private:	
	char* gender;//Допустим что пол у нас не наследуется

//Переменные которые унаследуют наследники
protected:
	char* name;
	int age;
	
public:
	//Если бы, мы не наследовали конструкторы, нам бы понадобился конструктор по умолчанию
	//Human() {}

	Human(char* name,char* gender,int age)
	{
		//Копируем данные с параметров в класс
		strcpy_s(this->gender, strlen(gender) + 1, gender);
		strcpy_s(this->name, strlen(name) + 1, name);
		this->age = age;
	}

	//Просто несколько функций :)
	bool isMan() {
		if (_stricmp(gender, "Male") == 0) {
			return true;
		}
	}
	bool isWoman() {
		if (_stricmp(gender, "Female") == 0) {
			return true;
		}
	}


	//Функции которые пригодятся когда мы узнаем о virtual, override и final
	char* getGender()  {
		return name;
	}
	void setGender(char* gender) {
		strcpy_s(this->gender, strlen(gender) + 1, gender);
	}

};