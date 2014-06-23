#ifndef STACK_H
#define STACK_H
#include <iostream>
#define STACKSIZE 10
class Stack{
	public:
		Stack();
		void push(int k);
		int pop();
		int getSize();
		void print();
	private:
		//int CUR_ARRAY_SIZE;
		//int size;
		int stack[STACKSIZE+1];
		//void resizeArray();
		
		int tos;
		bool is_full();
		bool is_empty();
};
#endif

