//
//  main.c
//  Calculator
//
//  Created by Eduardo Alejandro on 6/19/20.
//  Copyright © 2020 Eduardo Alejandro. All rights reserved.
//
// C program for generating a
// random number in a given range.
#include<stdio.h>
#include<stdlib.h>
#include <time.h>


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
int getRandomNumber1()
{
    srand(time(0));
    return rand() % 160 + 1;
}

int getRandomNumber2()
{
    srand(time(0));
    return rand() % 180 + 1;
}

int main(int argc, char* argv[]) {
   
    int here;
    float num1;
    float num2;
    float sum = 1;
    int randomNumber1;
    int randomNumber2;
    int sumQuiz;
    printf("If you want to take a math quiz press 1\n");
    printf("If you want to use the calculator press 2\n");
    printf("Enter your selection here: ");
    scanf("%d", &here);
    
    
    if(here == 1){
        printf("Here are your choices;\n");
        printf(" - if you would like to add, press 1 and then enter\n");
        printf(" - if you would like to subtract, press 2 and then enter\n");
        printf(" - if you would like to multiply, press 3 and then enter\n");
        printf(" - if you would like to divide, press 4 and then enter\n\n");
        printf("Type your decision here: ");
        scanf("%d", &here);
        
        if(here >= 1 && here <= 4){
            switch(here){
              case 1 :
                    randomNumber1 = getRandomNumber1();
                    randomNumber2 = getRandomNumber2();
                    printf("What is %d + %d =",randomNumber1, randomNumber2);
                    scanf("%d", & here);
                    sumQuiz = randomNumber1 + randomNumber2;
                    if(sumQuiz == here){
                      printf("Your answer is correct!!!\n");
                      printf("Great Job\n");
                    }
                    else{
                      printf("Your answer is wrong!!!\n");
                      printf(" The correct answer is %d \n",sumQuiz);
                      printf("Better luck next time\n");
                    }
                    break;
              case 2 :
                    randomNumber1 = getRandomNumber1();
                    randomNumber2 = getRandomNumber2();
                    printf("What is %d - %d =",randomNumber1, randomNumber2);
                    scanf("%d", & here);
                    sumQuiz = randomNumber1 - randomNumber2;
                    if(sumQuiz == here){
                        printf("Your answer is correct!!!\n");
                        printf("Great Job\n");}
                    else{
                    printf("Your answer is wrong!!!\n");
                    printf(" The correct answer is %d \n",sumQuiz);
                    printf("Better luck next time\n");
                    }
                        break;
                case 3 :
                randomNumber1 = getRandomNumber1();
                randomNumber2 = getRandomNumber2();
                    printf("What is %d * %d =",randomNumber1, randomNumber2);
                scanf("%d", & here);
                sumQuiz = randomNumber1 * randomNumber2;
                    if(sumQuiz == here){
                    printf("Your answer is correct!!!\n");
                    printf("Great Job\n\n");
                    }
                else{
                     printf("Your answer is wrong!!!\n");
                    printf(" The correct answer is %d \n",sumQuiz);
                    printf("Better luck next time\n");
                }
                    break;
                case 4 :
                randomNumber1 = getRandomNumber1();
                randomNumber2 = getRandomNumber2();
                     printf("What is %d / %d =",randomNumber1, randomNumber2);
                scanf("%d", & here);
                    sumQuiz = randomNumber1 + randomNumber2;
                    if(sumQuiz == here){
                     printf("Your answer is correct!!!\n");
                     printf("Great Job\n");
                    }
                        else{
            
                    printf("Your answer is wrong!!!\n\n");
                    printf(" The correct answer is %d \n\n",sumQuiz);
                    printf("Better luck next time\n\n");
                    break;}
            }
              
        }
            else{
               
                printf("Invalid input!!! BYE!! \n");}
            }
    else if(here==2){
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
        else{printf("Invalid input!!! BYE!! \n");}
        }
    else{
        
        printf("Invalid Input!!!");
    }
   return 0;
    }
