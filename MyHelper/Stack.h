#pragma once
#include <iostream>
using namespace std;

//Стек без возможности расширения, динамический
template <typename T>
class Stack
{
private:
	int n;
	int top;
	T* array;
public:
	
	Stack(int n=100);
	Stack(const Stack& obj);
	~Stack();
	void Push(T element);
	T Remove();
	friend ostream& operator<<(ostream& out, const Stack& obj);
	T* get_array();
	int get_top();
};


