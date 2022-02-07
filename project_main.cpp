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
	printf("1. Caloocan\n2. Las Piñas\n3. Mandaluyong\n4. Manila\n5. Marikini\n6. Muntinlupa\n7. Pasig\n8. Quezon\n9. Valenzuela\n");
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
