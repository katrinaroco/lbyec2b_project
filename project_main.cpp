#include <stdio.h>  
#include <stdlib.h>
#include <string.h> 
#include "project.h"

int main()
{
	int city, answer;
	
	start:
	const char *filename = "project.csv";  
    	hospital_data records = loadcsv(filename);
	
	printf("Metro Manila Hospital Locator & Registration\n");
	printf("Please enter your city: \n");
	printf("1. Manila\n2. Makati\n3. Quezon\n");
	scanf("%d", &city);
	
	switch(city){
		case 1:
			printf("Hospitals around Manila\n");
			printf("..presenting choices\n");
			answer = askregistration();
			createinfo();
			break;
		case 2:
			printf("Hospitals around Makati\n");
			printf("..presenting choices\n");
			answer = askregistration();
			createinfo();
			break;
		case 3:
			printf("Hospitals around Quezon City\n");
			printf("..presenting choices\n");
			answer = askregistration();
			createinfo();			
			break;
	}
	
	printf("yay!\n");

}
