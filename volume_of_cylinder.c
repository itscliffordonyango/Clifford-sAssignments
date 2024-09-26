/*The volime of a cylinder is given by the formular below. Write a C program to find the volume and surface area of the given cylinder. Prompt the user to enter radius and height
 */


#include <stdio.h>

float pi = 22/7 ;

int main(){
    //the variables below will be used in the formula

    
    float radius , height, volume ;

    printf("Enter the radius of your cylinder : \n");
    scanf("%f", &radius);

    printf("Enter the height of your cylinder: \n");
    scanf("%f",&height);

    printf("\n Radius = %.2f", radius);
    printf("\n Height = %.2f", height);

//volume  formula 
    volume = (pi * radius* radius * height);

    printf("\n The volume of the cylinder is %.3f  \n", volume);

//we are calling the surface area function 
    Surface_Area();

    return 0 ;

}


int Surface_Area(){
// the value of pi shall remain the same 
    printf("Surface Area \n");

    float Radius , Height , Surface_area ;

    printf("Enter the radius of your cylinder : \n");
    scanf("%f", &Radius);


    printf("Enter the Height of your cylinder : \n");
    scanf("%f", &Height);

    printf("\n Radius = %.2f", Radius);
    printf("\n Height = %.2f", Height);    

// Surface area formula 
   
   Surface_area = (2*(pi*Radius*Radius)) + (2*(pi*Radius*Height));

   printf("\n The Area of the cylinder is %.3f",Surface_area);

}
