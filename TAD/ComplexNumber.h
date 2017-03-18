//
// Created by Tomas on 15/3/2017.
//

#ifndef PROJECT_COMPLEXNUMBER_H
#define PROJECT_COMPLEXNUMBER_H

typedef struct complexNumber ComplexNumber;

struct ComplexNumber{
    double realNumber;
    double imaginaryNumber;
};

ComplexNumber* createAComplexNumber(double real, double imaginary);
ComplexNumber* sumUp(ComplexNumber* complexNumber1, ComplexNumber* complexNumber2);
ComplexNumber* subtract(ComplexNumber* complexNumber1, ComplexNumber* complexNumber2);
ComplexNumber* multiply(ComplexNumber* complexNumber1, ComplexNumber* complexNumber2);
ComplexNumber* divide(ComplexNumber* complexNumber1, ComplexNumber* complexNumber2);
double absoluteValue(ComplexNumber* complexNumber1);
void print(ComplexNumber* complexNumber1);
void freeSpace(ComplexNumber* complexNumber1);

#endif //PROJECT_COMPLEXNUMBER_H
