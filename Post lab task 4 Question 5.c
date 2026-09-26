#include <stdio.h>
int main(){
	float orderamount;
	int membership,citystatus;
printf("Enter orderamount= ");
scanf("%f", &orderamount);
printf("\nEnter membership '1' for Premium and '0' for no membership");
scanf(" %d", &orderamount);
printf("\nEnter citystatus '1' for within city and '0' for outside city");
scanf(" %d", &citystatus);

 if((orderamount > 3000) || (membership == 1)){
	printf("Free delivery");
 }
 else {
	printf("\nNo free delivery");}
 if(orderamount > 50000 && citystatus == 1){
	printf("\nNo cash on delivery available");}
 else {
	printf("\nNo COD");
 }	
	return 0;
}
		
