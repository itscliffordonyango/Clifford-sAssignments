// Write a program in C to display the cube of the number upto a given integer.

#include <stdio.h>

int main(){
    // We declare a varriable which will store the number inserted by the user

    int Startnum, Endnum;

    printf("Enter the Starting point of integer you wish to calculate");
    scanf("%d",&Startnum);

    printf("Enter the Stoping point of the integer :");
    scanf("%d",&Endnum);

    int i;

    for (i=Startnum; i<=Endnum;i++)
    {
        int cube;
        cube = i*i*i;
        printf("\n The number is :  %d and its cube is %d : ",i , cube);
    }
    
}
