#ifndef RESIZE_STACK_H
#define RESIZE_STACK_H
#include <iostream>
class Resize_Stack{
	public:
		Resize_Stack();
		void push(int ele);
		int pop();
		int peek();
		void print();
	private:
		int* stack;
		void resize();
		int size;
		int tos;
		bool is_full();
		bool is_empty();
		const int incr = 1;
};
#endif
