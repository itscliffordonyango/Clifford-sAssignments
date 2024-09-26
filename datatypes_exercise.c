
/*
Here we are going to take in the data being input by the usre and then print whaterver they give us

*/

#include <stdio.h>

int main(){
    
    char a ;
    char name[] = {}; //this is how to declare a string expecting an input
    int age;
    float height;
    double income;

// now we are to accept the user input  from the lines below

    printf("Enter your cartegory Letter: ");
    scanf("%c", &a);
// next input

    printf("Enter your official names:");
    scanf("%s", &name);
// next input

    printf("Enter your age:");
    scanf("%d", &age);
// next input 

    printf("Enter your height:");
    scanf("%f", &height);
// next input

    printf("Enter your net income:");
    scanf("%lf", &income);

    printf("\n");

// now we print every thing 

    printf("Your personal information is as follows : \n");

    printf("Name: %s \n", name);
    printf("Social Cartegory: %c \n", a);
    printf("Age : %d \n", age);
    printf("Height :%f \n", height);
    printf("Net Income: %lf \n", income); 

    printf("\n");




}
