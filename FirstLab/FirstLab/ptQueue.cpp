#include<iostream>
#include"ptQueue.h"

using namespace std;

ptQueue::ptQueue() { last = 0; size = 0; } //конструктор
ptQueue::~ptQueue() //деконструктор
{
	while (size > 0)
	{
		cell* temp = last;
		last = temp->ptrPrev;
		size--;
		delete temp;
	}
}

cell* ptQueue::get_last() { return last; } //геттер конца очереди

void ptQueue::push(int elem) //метод добавления элемента в очередь
{
	cell* newCell = new cell;
	newCell->ptrPrev = last;
	last = newCell;
	last->data = elem;
	size++;
}

int ptQueue::pop() //метод изъятия элемента из очереди
{
	cell* temp = last;
	int tmpData = 0;

	if (temp->ptrPrev == nullptr)
	{
		tmpData = temp->data;
		delete last;
		last = nullptr;
		size = 0;
	}
	else
	{
		while (temp->ptrPrev->ptrPrev != nullptr) { temp = temp->ptrPrev; }
		tmpData = temp->ptrPrev->data;
		delete temp->ptrPrev;
		temp->ptrPrev = nullptr;
		size--;
	}
	return tmpData;
}

void ptQueue::print() //метод вывода очереди на экран
{
	cell* temp = last;
	while (temp->ptrPrev != nullptr)
	{
		cout << temp->data << "-->";
		temp = temp->ptrPrev;
	}
	cout << temp->data << endl;
}

void ptQueue::merge(ptQueue& Q) //метод слияния очереди
{
	int* buffData = new int[Q.size];
	cell* temp = Q.last;
	for (int i = Q.size - 1; i >= 0; i--)
	{
		buffData[i] = temp->data;
		temp = temp->ptrPrev;
	}
	for (int i = 0; i < Q.size; i++) { this->push(buffData[i]); }
	delete[] buffData;
}

void ptQueue::copy(ptQueue& Q){ //метод копирования очереди
	int* buffData = new int[Q.size];
	cell* temp = Q.last;
	for (int i = Q.size - 1; i >= 0; i--)
	{
		buffData[i] = temp->data;
		temp = temp->ptrPrev;
	}
	for (int i = 0; i < Q.size; i++) { this->push(buffData[i]); }
	delete[] buffData;
}

bool ptQueue::blSmthng() { return size == 0 ? true : false; } //метод проверки на заполненность

int ptQueue::specFunction() //метод выполнения задачи
{
	cell* last = get_last();
	int max = get_last()->data;
	int min = get_last()->data;
	int result = 0;

	if (size == 0){cout << "Queue is clear" << endl;}
	else
	{
		while (last != nullptr)
		{
			if (last->data > max)
				max = last->data;
			if (last->data < min)
				min = last->data;
			last = last->ptrPrev;
		}
		result = max - min;
	}
	return result;
}
