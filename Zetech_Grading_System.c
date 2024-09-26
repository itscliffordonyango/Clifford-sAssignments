/*
GRADES          SCORE
A                70 - 100
B                60 - 69 
C                50 - 59 
D                40 - 49
E(Fail)          Below 39

*/

#include <stdio.h>

int main() {
    int Subject1 , Subject2 , Subject3;

    printf("Enter your grades fo the following subjects: \n");
    
    printf("Subject1 : ");
    scanf("%d", &Subject1);

    printf("Subject2 : ");
    scanf("%d", &Subject2);

    printf("Subject3 : ");
    scanf("%d", &Subject3);

// Calculate the average grade 

    float Average ;

    Average = (Subject1 + Subject2 + Subject3)/3 ;

    printf("The average of your three subjects is : \n");
    printf("%.1f", Average);

    if (Average >=70 && Average<=100){
        printf("Congratulations !! You got an A");

    }

    else if (Average >= 60 && Average <= 69){
        printf("Well done !! You got a B");
    }

    else if (Average>= 50 && Average <=59){
        printf("Your grade is a C");

    }

    else if (Average >= 40 && Average <= 49){
        
        printf("You got a D");
    }

    else if (Average <=39){
        printf("YOu need to retake the test!!! \n You got an E wich is a Fail");
    
    }

    else {
        printf("Kindly confirm with your lecturer if you took the test");
    }

}