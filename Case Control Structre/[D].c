#include<stdio.h>
main()
{
    int a,b;
    printf("\nEnter your class : ");
    scanf("%d", &a);
    printf(" \nEnter your number of subjects in which you are failed : ");
    scanf("%d", &b);
    switch(a)
    {
    case(1):
        switch(b)
        {
        case(3):
        case(2):
        case(1):
        case(0):
            printf("You've got the grace of 5 marks.");
            break;			
        default:
            printf("You will not get any grace.");
        }
        break;
            
    case(2):
        switch(b)
        {
        case(2):
        case(1):
        case(0):
            printf("You've got the grace of 4 marks.");
            break;				
        default:
            printf("You will not get an grace.");
            break;
        }
        break;
        
    case(3):
        switch(b)
        {
        case(1):
        case(0):
            printf("You've got the grace of 5 marks.");
            break;
        default:
            printf("You will not get any grace.");
            break;
        }
        break;
            
    default:
        printf("\n\nWrong choice of class.\nTry again!!");
        break;	
    }
    getch();
    return 0;
}