#include <stdio.h>
int main(){
int plan;
int mins;
float totalbill;
printf("Plan 1: Rs.500 for 1000 minutes");
printf("\nPlan 2: Rs.800 for 2000 minutes");
printf("\nPlan 3: Rs.1200 for unlimited minutes");
printf("\nPlan 4: Custom plan billed at Rs.1/min");

printf("\nEnter the plan number= ");
scanf(" %d",&plan);
printf("\nEnter the minutes= ");
scanf(" %d", &mins);

switch(plan)
{
case 1:
    if(mins > 1000){
    totalbill = 500 + ((mins - 1000)*2);
}
else{
    totalbill = 500;}
break;
case 2:
    if(mins > 2000){
    totalbill = 800 + ((mins - 2008)*2);}
    else{
    totalbill = 800;}
break;
case 3:
totalbill = 1200;
break;
case 4:
totalbill = mins * 1;
break;
printf("\nTotal bill is= %f", totalbill);

}
return 0;
}
