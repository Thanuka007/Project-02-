#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cash_amount;

    printf("-------------------------------------\n");
    printf("Please Enter Withdraw Amount: ");
    scanf("%d",&cash_amount);

    int note_5000 = cash_amount/5000;
    cash_amount -= (5000* note_5000);

    int note_1000 = cash_amount/1000;
    cash_amount -= (1000* note_1000);

    int note_500 = cash_amount/500;
    cash_amount -= (500* note_500);

    int note_100 = cash_amount/100;
    cash_amount -= (100* note_100);

    printf("-------------------------------------\n");
    printf("%32s\n","Number of Notes Clarification");
    printf("-------------------------------------\n");

    printf("%16s =%7d\n","5000 Notes",note_5000);
    printf("%16s =%7d\n","1000 Notes",note_1000);
    printf("%16s =%7d\n"," 500 Notes",note_500);
    printf("%16s =%7d\n"," 100 Notes",note_100);
    printf("-------------------------------------\n");


    return 0;
}
