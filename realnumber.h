#ifndef REALNUMBER_H
#define REALNUMBER_H

#include<stdio.h>
#include<iostream>
#include "number.h"


class RealNumber:public Number{
public:
	RealNumber(double realNum);
	~RealNumber();
	virtual void print();
	virtual RealNumber add(const RealNumber& other);
	virtual RealNumber mul(const RealNumber& other);
private:
	double realNumber;
};

#endif
