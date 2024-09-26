/*
Write a program to find the area of a rectangle. Prompt the user to enter the length and width.

Push the code to github 

Title : Area Assignment 
Author: Clifford Onyango
contact: cliffordonyangog@gmail.com

*/

#include <stdio.h>

int main(){
    float length , width , area ; //we are using float because the values of length width and area may contain dacimal

    printf("Input the length of the rectangle (in meters): \n");
    scanf("%f", &length);

    printf("Input the width of the rectancle (in meters): \n");
    scanf("%f", &width);

    area = length * width ;

    printf("The area of the rectangle is: \n %f m²",area);

   
}