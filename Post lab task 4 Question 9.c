#include <stdio.h>
int main(){
int people;
float totalweight;
printf("Enter the Total Weight= ");
scanf("%f", &totalweight);
printf("\nEnter Number of People= ");
scanf("%d", &people);

if(totalweight > 1000 || people > 10){
    printf("Overweight NOT possible");
}
else if(totalweight > 1000 && people > 10){ 
    printf("Exceeding People");
}
else{	
    printf("Operated normally");
}

return 0;
}
