/*
Write a program to calculte simple interest by accepting the principal amount, time and rate values. The simple interest is girven by  (Principal amount * time * rate)/100 */


#include <stdio.h>

int main (){

//declaring and initializing varriables 
int Principal_Amount ;
float time , rate ;

//now we take in the input of the user 

//capture the principal amount
printf("How much money do you need to borrow ? \n");
scanf("%d" , &Principal_Amount );

//capture the time 
printf("What duration (IN YEARS) will you need to repay the loan? \n");
scanf("%f", &time);

// take the prefered rate of the user

printf("Chose your prefered rate of repayment that is between 5 and 20 percent per year: \n ");
scanf("%f", &rate);


float Simple_Interest = (Principal_Amount * rate * time)/100 ;

    printf("For the loan of : %d  , Over the period of %.1f years, At the rate of %.2f percent per annum \n", Principal_Amount ,  time , rate);
    // printf("Over the period of %f years", time);
    // printf("At the rate of %f percent per annum",rate);

    printf("The resulting  Simple Interest  is : %.2f \n", Simple_Interest);

    float Total_Payable_Amount = Principal_Amount + Simple_Interest ;

    printf("The total amount you will be paying is : %.2f", Total_Payable_Amount);



}