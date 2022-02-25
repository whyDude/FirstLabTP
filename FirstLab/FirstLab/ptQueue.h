#pragma once

typedef struct cell { //элемент
	int data = 0;  //значение элемента
	cell* ptrPrev = nullptr; //указатель на предыдущий элемент
}cell;

class ptQueue {
private:
	cell* last = 0; //указатель на конец очереди
protected:
	int size; //размер очереди
public:
	ptQueue(); //конструктр
	~ptQueue(); //деконструктор

	cell* get_last(); //прототип функции получения указателя на конец очереди
	void push(int elem); //прототип функции добавления элемента в очередь
	int  pop(); //прототип функции удаления элемента из очереди
	void print();  //прототип функции вывода очереди  на экран
	void merge(ptQueue& Q); //прототип функции слияния очередей 
	void copy(ptQueue& Q); //прототип функции копирования очередей
	bool blSmthng(); //прототип функции проверки на заполненность
	int specFunction(); //прототип функции выполнения задачи
};
