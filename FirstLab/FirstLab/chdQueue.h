#pragma once
#include"ptQueue.h"

class chdQueue_pri : private ptQueue
{
public:
	int specFunction();
	void push(int elem);
	int  pop();
	void print();
	void merge(chdQueue_pri& Q);
	void copy(chdQueue_pri& Q);
	bool blSmthng();
};

class chdQueue_pro : protected ptQueue
{
public:
	int specFunction();
	void push(int elem);
	int  pop();
	void print();
	void merge(chdQueue_pro& Q);
	void copy(chdQueue_pro& Q);
	bool blSmthng();
};

class chdQueue_pab : public ptQueue
{
public:
	
};