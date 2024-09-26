/*
Script to calculate the area of a triangle*/

#include <stdio.h>

int main(){

    // Area of a triangle = 1\2 base x height 

    float h = 0.5 ;
    float base , height , area ;

    printf("Enter the base of your triangle : \n ");
    scanf("%f", &base);


    printf("Enter the height of your triangle : \n " );
    scanf("%f", &height);

    area = h*(height*base);

    printf("The area of your triangle is : %f \n" , area);

}