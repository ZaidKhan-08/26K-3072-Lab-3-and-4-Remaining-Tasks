#include <stdio.h>

int main(){
float income;
float cgpa;
printf("Enter Student CGPA=");
scanf("%f",&cgpa);
printf("Enter Family income=");
scanf("%f", &income);
if(cgpa > 3.7 && income < 50000){ 
    printf("Full Scholarship");
}
else if(cgpa > 3.3 && income < 100000){
    printf("Half Scholarship");
}
else{
    printf("NO Scholarship");
}
return 0;
}
