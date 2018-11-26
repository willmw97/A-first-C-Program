#include <stdio.h>
#include <stdlib.h>

// Calculates Income Statement
//void Income_Statement(float IncomeTotal);


float Income_Statement(){
int i;
float Revenue;
float Expenses;
float IncomeTotal;

printf("Please Enter Revenues\n");
scanf("%f", &Revenue);

printf("Please Enter Expenses\n");
scanf("%f", &Expenses);


IncomeTotal = Revenue - Expenses;

printf("\t \t Income Statement\n");
printf("Revenues \n ");
printf("\t Service Revenue \t \t $%.2f \n", Revenue);
printf("Expenses\n");
printf("\t Total Expenses \t \t $%.2f \n", Expenses);
// draws line
for(i = 0; i <= 50; i++){
    printf("_");
}
printf("\nNet Income \t \t \t \t $%.2f \n", IncomeTotal);
// draws line
for(i = 0; i <= 50; i++){
    printf("_");
}
return;
}
// Function for Retained Earnings
float Retained_Earnings(){
int i;
char month_name[20];
float RetainedEarningsBegin;
float RetainedEarningsEnd;
float Dividends, TotalRN;
float NetIncome;
//Asks user for Month for Retained Earnings statement
printf("\nPlease Enter the current month\n");
scanf("%s", &month_name);
printf("Please enter retained earnings at beggining of the month\n");
scanf("%f", &RetainedEarningsBegin);
printf("Please Enter NetIncome \n");
scanf("%f", &NetIncome);
printf("Please enter total dividends\n");
scanf("%f", &Dividends);


TotalRN = RetainedEarningsBegin + NetIncome;
RetainedEarningsEnd = TotalRN - Dividends;

printf("\t Retained Earnings Statement \n");
printf("Retained earnings, %s 1 \t \t $%.2f \n",month_name, RetainedEarningsBegin);
printf("Add: NetIncome \t \t \t $%.2f \n", NetIncome);
//draws line
for(i = 0; i <= 50; i++){
    printf("_");
}
printf("\n \t \t \t \t %.2f \n", TotalRN);
printf("Less: Dividends \t \t $%.2f \n", Dividends);
printf("Retained earnings, %s 30 \t \t $%.2f \n",month_name, RetainedEarningsEnd);
// draws line
for(i = 0; i <= 50; i++){
    printf("_");
}
return;
}



int main()
{

Income_Statement();

Retained_Earnings();
    return 0;
}
