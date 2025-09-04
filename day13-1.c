/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.  */

#include<stdio.h>
#include<stdlib.h>
int main()
{
 while(1)
 {
    printf("\nWelcome to the calculator\n");
    printf("\nWhich operation do you want to perform:\n1.addition\n2.subtraction\n3.division\n4.multiplication\n5.exit\n");
    int choice;
    scanf("%d", &choice);
    float no1;
    float no2;
    
    switch (choice)
       {
         case 1:
           printf("\nPerforming addition: \n Which numbers you want to add?\n");
           scanf("%f",&no1);
           scanf("%f",&no2);
           printf("\nResults: %f\n", no1+no2);
           break;
         case 2:
           printf("\nPerforming subtraction: \n Which numbers you want to subtract?\n");
           scanf("%f",&no1);
           scanf("%f",&no2);
           printf("\nResults: %f\n",no1-no2);
           break;
         case 3:
           printf("\nPerforming division: \n  Which numbers you want to divide ?\n");
           scanf("%f",&no1);
           scanf("%f",&no2);
           if (no2 == 0.000000)
           {
              printf("\nCant divide with 0\n");
           }
           else
            {printf("\nResults: %f\n",no1/no2);}
            break;
         case 4:
           printf("\nPerforming multiplication: \n Which numbers you want to multiply?\n");
           scanf("%f",&no1);
           scanf("%f",&no2);
           printf("\nResults: %f\n",no1*no2);
           break;
        case 5:
           printf("\nExiting the program, visit again :) \n");
           exit(0);
        default:
           printf("\nWrong value entered\n");
           break;
       }
       char yn;
        printf("\nDo you want to run program again? y/n\n");
        scanf(" %c", &yn);
        if ( yn=='y')
        {printf("Running again....\n");}
        else
        {return 0;}
 }
}