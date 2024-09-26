/*
Program to add 2 numbers    (Varriables and data types)
*/

#include <stdio.h>

/*int main() {
    int Num1 = 10;
    int Num2 =  20;

    int Sum;
    Sum = Num1 + Num2;

    printf("%d", Sum);

    return 0 ;
}*/

int main(){

    int a , b, sum;
    // sum = a + b ;

    printf("Enter the first number a: \n");
    scanf("%d", &a);

    printf("Enter the second number b : \n");
    scanf("%d", &b);
    sum = a + b ;
    printf("The sum of a and b is  : \n  %d", sum);

}