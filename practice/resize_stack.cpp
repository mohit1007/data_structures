#include "resize_stack.h"
Resize_Stack::Resize_Stack(){
	this->stack = new int[1];
	this->size = 1;
	this->tos = 0;
}
void Resize_Stack::push(int ele){
	if(is_full()){
		//resize
		std::cout<<"Resizing "<<std::endl;
		resize();
	}
	this->stack[this->tos++] = ele;
}

int Resize_Stack::pop(){
	if(is_empty()){
		std::cout<<"stack is empty "<<std::endl;
	}
	else{
		return this->stack[--this->tos];
	}
	return -1;
}
bool Resize_Stack::is_full(){
	if (this->tos == this->size) return true;
	return false;
}
void Resize_Stack::resize(){
	this->size += this->incr;
	int *resize_array = new int[this->size];
	for(int i =0; i < this->size; i++){
		resize_array[i] = this->stack[i];
	}
	this->stack = resize_array;
	delete[] resize_array;
	
}
bool Resize_Stack::is_empty(){
	if (this->tos == 0) return true;
	return false;
}
void Resize_Stack::print(){
	for(int i=0; i < this->tos;i++){
		std::cout<<" ele at "<<i<<" is: "<<this->stack[i]<<std::endl;
	}
}
int Resize_Stack::peek(){
	if(is_empty()){
		std::cout<<"Stack is empty "<<std::endl;
	}
	else{
		return this->stack[this->tos-1];
	}
	return -1;
}

int main(){
	Resize_Stack rs;
	rs.push(20);
	rs.push(22);
	rs.print();
	int pop1 = rs.pop();
	rs.print();
	int p1 = rs.peek();
	std::cout<<p1<<std::endl;	
}

