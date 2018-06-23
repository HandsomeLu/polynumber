#include<stdio.h>
#include<iostream>
#include "number.h"
#include "realnumber.h"
#include "number.h"

using namespace std;

int main(){

RealNumber num1(100);
RealNumber num2(13.5);
RealNumber add=num1.add(num2);
RealNumber mul=num1.mul(num2);
add.print();
mul.print();

return 0;
}

