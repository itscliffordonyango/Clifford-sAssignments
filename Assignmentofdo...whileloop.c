
# include <stdio.h>

int main(){

    int Startnum, num , Endnum;

    double cube ;

        printf("Enter the entry number : \n");
        scanf("%d", &Startnum);

        printf("Enter the exit number for the code \n");
        scanf("%d",&Endnum);
        num = Startnum;

    do {

        
        num +=1 ;

        cube = num*num*num ;

        printf("The number is %d and it's cube is %0.1lf \n", num ,cube);

        


    }

    while (num != Endnum);
    {
        printf("\n Endpoint attained successfully.");
    }

    
}