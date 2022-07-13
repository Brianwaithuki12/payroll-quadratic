#include <stdio.h>
//author : brian waithuki
int main(){
    char name[30];
    int employeenumber;
    int kranumber;
    int hours;
    int normalpay;
    int overtimepay;
    int taxPaid;
    int netIncome;

printf("Enter name of employee: ");
scanf("%s",&name);
printf("Enter employee number: \n");
scanf("%d",&employeenumber);
printf("Enter kra number: \n");
scanf("%d",&kranumber);
printf("Enter hours worked: \n");
scanf("%d",hours);

normalpay = 1000 * hours;
if (hours < 40 ){
    overtimepay = hours - 40 * 1500;
}else {
    return overtimepay = 0;
};
taxPaid = normalpay + overtimepay * 30 / 100;
netIncome = normalpay + overtimepay - taxPaid;
printf("Normal pay is: %d \n",normalpay);
printf("Overtime pay is: %d \n",overtimepay);
printf("tax paid is: %d \n",taxPaid);
printf("Net income is: %d",netIncome);
}