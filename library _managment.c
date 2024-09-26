/*
    DAYS OVERDUE                CHARGES PER DAY
    Upto 7 days                  Ksh. 20 
    8 to 14 days                 Ksh. 50
    15 days or more              Ksh. 100


    Required varriables :
                        1) BookID
                        2) Duedate
                        3) returndate
    

*/

#include <stdio.h>

char BookID[30];
int dueday , duemonth , dueyear ;
int returnday, returnmonth,returnyear ;


int main(){

// Prompt user to enter the book id
    printf("Enter the BookID of the book you borrowed: \n");
    // scanf("%s", &BookID);
    fgets(BookID,sizeof(BookID), stdin);

// Prompt user to enter the borrowing date 
    printf("\n Enter the due date of book you're borrowing  in the format given dd/mm/yy : \n");

    printf("Day :");
    scanf("%d", &dueday);

    printf("Month :");
    scanf("%d", &duemonth);

    if (duemonth >12 ){
        printf("You have entered an invalid month. \n ");
    }
    else{
        // printf("\n");
    }

    printf("Year : ");
    scanf("%d", &dueyear);


//prompt user to enter the return date 

    printf("Enter the return date issued on the book in the format given dd/mm/yy : \n");

    printf("Day : ");
    scanf("%d" ,&returnday);

    printf("Month : ");
    scanf("%d", &returnmonth);

    if (returnmonth >12 ){
        printf("You have entered an invalid month.");
    }
    else{
        // printf("\n");
    }

     printf("Year:");
     scanf("%d", &returnyear);

     //returnmonth = duemonth ;

    if (returnmonth == duemonth  && returnyear == dueyear){
        printf("Processing your request..........give us a minute \n");
    }

    else{
        printf("The due month together with the due year need to be similar to  the return month and return year for you to have borrowed the book \n");
        
    }

    /*
      (returnyear = dueyear)

    

we need to perform the calculations that gives us the difference in days between the return date and the duedate

HOWEVER THE ISSUE WITH THIS CODE IS THAT WHEN A USER BORROWS A BOOK ON THE 30TH OR 31ST IT CANNOT BE CARRIED TO THE NEXT MONTH DUE TO THE RESTRICTIONS ON THE MONTH .

CALCULATIONS */


 int Overdue_days , Charge ;
 

 Overdue_days = returnday - dueday ;

 printf("\n Your overdue days are : %d days", Overdue_days);


if (Overdue_days<=7){
    Charge = Overdue_days * 20 ;
    printf("\n Your overdue charge is Ksh.%d ", Charge);
}

else if (Overdue_days >7 && Overdue_days <= 14){
    Charge = Overdue_days * 50 ;
    
    printf("\n Your overdue charge is Ksh.%d ", Charge);
}

else if (Overdue_days >=15){
    Charge = Overdue_days * 100 ;
    printf("\n Your overdue charge is Ksh.%d ", Charge);
}

else {

}

printf("\n Dear student , your charges for the book : %s ,which you ought to return on the date %02d/%02d/%d  has billed you a fine of Ksh.%d  since you returned it on %02d/%02d/%d", BookID , dueday,duemonth,dueyear,Charge, returnday,returnmonth,returnyear);

}

