#include <stdio.h>

int main(){
float temp;
float pressure;
printf("Enter Temperature=");
scanf("%f", &temp);
printf("\nEnter Pressure=");
scanf("%f", &pressure);
if(temp > 100.0 || pressure > 250.0){
	printf("Shutdown");
	}
else if((temp > 85.0 && temp <= 100.0) || (pressure > 200.0 && pressure <= 250.0)){
 printf("\nWarning mode");
 }

return 0;
}
