#include<stdio.h>
#include<iostream>
#include "number.h"

using namespace std;

Number::Number(double num){
	this->number=num;
}

void Number::print(){
	cout<<number<<endl;
}
Number Number::add(const Number& other){
	Number add(0);
	add.number=this->number+other.number;
	return add;
}

Number Number::mul(const Number& other){
	Number mul(0);
	mul.number=this->number*other.number;
	return mul;
}

Number::~Number(){}
