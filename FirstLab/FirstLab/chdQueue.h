#pragma once
#include"ptQueue.h"

class chdQueue_pri : private ptQueue //дочерний класс с модификатором приват
{
public: //те же методы, только в паблике
	int specFunction();
	void push(int elem);
	int  pop();
	void print();
	void merge(chdQueue_pri& Q);
	void copy(chdQueue_pri& Q);
	bool blSmthng();
};

class chdQueue_pro : protected ptQueue //дочерний класс с модификатором протект
{
public://те же методы, только в паблике
	int specFunction();
	void push(int elem);
	int  pop();
	void print();
	void merge(chdQueue_pro& Q);
	void copy(chdQueue_pro& Q);
	bool blSmthng();
};

class chdQueue_pab : public ptQueue //дочерний класс с модификатором паблик
{
public: //тут не надо, и так все открыто и доступно
	
};