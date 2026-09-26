#include <stdio.h>

int main(){
	int zone, fine;
	float speed, finalamount, finalfine;
	printf("Enter zone type 1=School, 2=Highway and 3=Residential Area= ");
	scanf(" %d",&zone);
	printf("Enter speed of Driver= ");
	scanf("%f",&speed);
	switch(fine)
	{
	case 1:
	    if(speed > 30){
	    finalfine = speed - 30;
	        if(finalfine > 20){
	        finalamount = 1000*2;}
	    }
	    else{
	    finalamount = 1000;}
	break;
	case 2:
	    if(speed > 100){
		finalfine = speed - 100;
		    if(finalfine > 20){
	        finalamount = 1000*2;}
	    }
	    else{
	    finalamount = 1000;}
	    break;
	case 3:
		if(speed > 50){
			finalfine = speed - 50;
	        if(finalfine > 20){
	        finalamount = 1000*2;}
	    }
	    else{
	    finalamount = 1000;}
		break;
    }
    return 0;
}	
