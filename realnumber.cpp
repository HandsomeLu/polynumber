#include<stdio.h>
#include<iostream>
#include "realnumber.h"

using namespace std;

RealNumber::RealNumber(double realNum):Number(realNum){
	realNumber=realNum;
}

void RealNumber::print(){
	cout<<realNumber<<endl;
}

RealNumber RealNumber::add(const RealNumber& other){
	RealNumber add(0);
	add.realNumber=this->realNumber+other.realNumber;
	return add;
}

RealNumber RealNumber::mul(const RealNumber& other){
	RealNumber mul(0);
	mul.realNumber=this->realNumber*other.realNumber;
	return mul;
}

RealNumber::~RealNumber(){}

