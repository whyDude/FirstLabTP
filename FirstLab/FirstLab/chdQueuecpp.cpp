#include <iostream>
#include "chdQueue.h"

using namespace std;

int chdQueue_pri::specFunction() { return ptQueue::specFunction(); }
int chdQueue_pri::pop() { return ptQueue::pop(); }
void chdQueue_pri::push(int elem) { return ptQueue::push(elem); }
void chdQueue_pri::print() { return ptQueue::print(); }
bool chdQueue_pri::blSmthng() { return ptQueue::blSmthng(); }
void chdQueue_pri::merge(chdQueue_pri& Q) { return ptQueue::merge(Q); }
void chdQueue_pri::copy(chdQueue_pri& Q) { return ptQueue::copy(Q); }

int chdQueue_pro::specFunction() { return ptQueue::specFunction(); }
int chdQueue_pro::pop() { return ptQueue::pop(); }
void chdQueue_pro::push(int elem) { return ptQueue::push(elem); }
void chdQueue_pro::print() { return ptQueue::print(); }
bool chdQueue_pro::blSmthng() { return ptQueue::blSmthng(); }
void chdQueue_pro::merge(chdQueue_pro& Q) { return ptQueue::merge(Q); }
void chdQueue_pro::copy(chdQueue_pro& Q) { return ptQueue::copy(Q); }