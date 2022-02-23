#pragma once

typedef struct cell {
	int data = 0;
	cell* ptrPrev = nullptr;
}cell;

class ptQueue {
private:
	cell* last = 0;
protected:
	int size;
public:
	ptQueue();
	~ptQueue();

	cell* get_last();
	void push(int elem);
	int  pop();
	void print();
	void merge(ptQueue& Q);
	void copy(ptQueue& Q);
	bool blSmthng();
	int specFunction();
};
