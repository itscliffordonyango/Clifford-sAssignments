// bank loaning system 


#include <stdio.h>

int main(){
    // we declare the required varriables

    int age , Income ; 
    printf("Enter your age and your monthly income to verify your eligibility \n");

    printf("Age : ");
    scanf("%d", age);

    printf("Monthly income : ");
    scanf("%d", Income);

    if (age>= 21 && Income >= 21000 ){

        printf("Congratulations you are eligible for the loan programme");

    }

    else {
        printf("Sorry you are not eligible for the loan programme");
    }
}
