#include "stack.h"
Stack::Stack(){
	tos = 0;
}
void Stack::push(int k){
	if (!is_full()){
		stack[tos++] = k;
	}
	else{
		std::cout <<" Stack is full "<<std::endl;
	}
}
int Stack::pop(){
	if(!is_empty()){
		return stack[--tos];
	}
	else{
		std::cout <<"Stack is empty"<<std::endl;
	}
	return -1;
}
int Stack::getSize(){
	return tos;
}
bool Stack::is_full(){
	if (tos == STACKSIZE) return true;
	else return false;
}
bool Stack::is_empty(){
	if(tos == 0) return true;
	else return false;
}
void Stack::print(){
	std::cout<<"Printing "<<std::endl;
	for (int i =0 ; i < tos;i++){
		std::cout<<stack[i]<<std::endl;
	}
}
int main(){
	Stack s ;
	s.push(2);
	s.push(20);
	std::cout<<"popping "<<s.pop()<<std::endl;
	s.push(-2);
	s.print();
}
