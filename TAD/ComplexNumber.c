//
// Created by Tomas on 15/3/2017.
//

#include "ComplexNumber.h"

ComplexNumber* createAComplexNumber(double real, double imaginary){
    ComplexNumber* complexNumber = malloc(sizeof(ComplexNumber));
    complexNumber -> realNumber = real;
    complexNumber -> imaginaryNumber = imaginary;
    return complexNumber;
}

ComplexNumber* sumUp(ComplexNumber* complexNumber1, ComplexNumber* complexNumber2){
    double a = complexNumber1 -> realNumber;
    double b = complexNumber1 -> imaginaryNumber;
    double c = complexNumber2 -> realNumber;
    double d = complexNumber2 -> imaginaryNumber;
    ComplexNumber* complexNumber3 = malloc(sizeof(ComplexNumber));
    complexNumber3 -> realNumber = a+c;
    complexNumber3 -> imaginaryNumber = b+d;
    return complexNumber3;
}

ComplexNumber* subtract(ComplexNumber* complexNumber1, ComplexNumber* complexNumber2){
    double a = complexNumber1 -> realNumber;
    double b = complexNumber1 -> imaginaryNumber;
    double c = complexNumber2 -> realNumber;
    double d = complexNumber2 -> imaginaryNumber;
    ComplexNumber* complexNumber3 = malloc(sizeof(ComplexNumber));
    complexNumber3 -> realNumber = a-c;
    complexNumber3 -> imaginaryNumber = b-d;
    return complexNumber3;
}

ComplexNumber* multiply(ComplexNumber* complexNumber1, ComplexNumber* complexNumber2){
    double a = complexNumber1 -> realNumber;
    double b = complexNumber1 -> imaginaryNumber;
    double c = complexNumber2 -> realNumber;
    double d = complexNumber2 -> imaginaryNumber;
    ComplexNumber* complexNumber3 = malloc(sizeof(ComplexNumber));
    complexNumber3 -> realNumber = (a*c)-(b*d);
    complexNumber3 -> imaginaryNumber = (a*d)+(c*b);
    return complexNumber3;
}

ComplexNumber* divide(ComplexNumber* complexNumber1, ComplexNumber* complexNumber2){
    double a = complexNumber1 -> realNumber;
    double b = complexNumber1 -> imaginaryNumber;
    double c = complexNumber2 -> realNumber;
    double d = complexNumber2 -> imaginaryNumber;
    ComplexNumber* complexNumber3 = malloc(sizeof(ComplexNumber));

}

double absoluteValue(ComplexNumber* complexNumber1){

}

void print(ComplexNumber* complexNumber1){

}

void freeSpace(ComplexNumber* complexNumber1){
    free(&(complexNumber1 -> realNumber));
    free(&(complexNumber1 -> imaginaryNumber));
    fre(&complexNumber1);
}
