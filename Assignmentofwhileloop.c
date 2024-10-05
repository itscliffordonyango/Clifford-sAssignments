

#include <stdio.h>
#include <math.h>


int main(){
    // declare the variables 

    int Startnum , Endnum , integer ;
    double cube ;

    printf("Enter the starting number : \n");
    scanf("%d",&Startnum);

    printf("Enter the terminating number: \n");
    scanf("%d", &Endnum);


    integer = Startnum;

    while (integer<=Endnum){
           
        cube = integer * integer * integer;

        printf("The cube for the number %d , is %0.1lf \n",integer,cube);
        

        integer += 1;

    }

    //  printf("The number is : %d  and its cube is :%0.1lf \n", integer,cube);

    return 0 ;


}


