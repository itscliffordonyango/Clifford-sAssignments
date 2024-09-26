/*C varriables and data types */

#include  <stdio.h> 

int main(){
    // here we are going to declare a varriable of character a  unto the value K 

    char a = 'K';
    int age = 20 ;
    float height = 180.69;
    double income = 1090000.99;
    char name[] = "Clifford Onyango"; /*THis is how we write strings in C language. Do not forget the square brackets [] and the double quotes ""

    Now we are going to print the varriabled we have innitialized in the lines above 
    */

   printf("Name: %s \n", name);
   printf("Age: %d years \n", age);
   printf("Height: %.1f cm \n",height);
   printf("Net Income:$ %10.2lf \n",income);
   printf("Letter Character : %c \n", a);

   return 0;


}


