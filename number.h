#ifndef NUMBER_H
#define NUMBER_H

#include<stdio.h>
#include<iostream>

using namespace std;

class Number{
public:
	Number(double num);
	~Number();
	virtual void print();
	virtual Number add(const Number& other);
	virtual Number mul(const Number& other);	
private:
	double number;
};

#endif
