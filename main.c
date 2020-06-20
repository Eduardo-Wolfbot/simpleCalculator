//
//  main.c
//  Calculator
//
//  Created by Eduardo Alejandro on 6/19/20.
//  Copyright © 2020 Eduardo Alejandro. All rights reserved.
//
// C program for generating a
// random number in a given range.
#include <stdio.h>

float addNumbers(float num1,float num2){
  float sum = num1 + num2;
    return sum;
}

float subtractNumbers(float num1,float num2){
  float sum = num1 - num2;
    return sum;
}

float mutiplyNumbers(float num1,float num2){
  float sum = num1 * num2;
    return sum;
}

float divideNumbers(float num1,float num2){
  float sum = num1 / num2;
    return sum;
}

int main(int argc, char* argv[]) {

    int here;
    float num1;
    float num2;
    float sum = 1;

   printf("Welcome to Calculate like a Pro!!!\n");
   printf("Here are your choices;\n");
   printf(" - if you would like to add, press 1 and then enter\n");
   printf(" - if you would like to subtract, press 2 and then enter\n");
   printf(" - if you would like to multiply, press 3 and then enter\n");
   printf(" - if you would like to divide, press 4 and then enter\n\n");
   printf("Type your decision here: ");
       scanf("%d", &here);
    
    if(here >= 1 && here <= 4){
        printf("Type your first number: ");
        scanf("%f", &num1);
        printf("Type your second number: ");
        scanf("%f", &num2);
        switch(here){
            case 1 :
                sum = addNumbers(num1, num2);
                break;
            case 2 :
                sum = subtractNumbers(num1, num2);
                break;
            case 3 :
                 sum = mutiplyNumbers (num1, num2);
                 break;
            case 4 :
                sum = divideNumbers(num1, num2);
                break;
            }
        printf("\n\n\nYour answer is %.2f!!!\n\n\n", sum);
        }
    else{
        printf("Invalid input!!! BYE!! \n");
    }
    
   return 0;
}
