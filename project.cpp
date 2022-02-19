#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "project.h"


void choosehospital ()
{
	int city, answer;
	printf("Please enter your city: \n");
	printf("1. Caloocan\n2. Las Pinas\n3. Mandaluyong\n4. Manila\n5. Marikini\n6. Muntinlupa\n7. Pasig\n8. Quezon\n9. Valenzuela\n");
	scanf("%d", &city);
	
	switch(city){
		case 1:
			printf("Hospitals around Caloocan\n");
			printf("..presenting choices\n");
			answer = askregistration();
			break;
		case 2:
			printf("Hospitals around Las Pinas\n");
			printf("..presenting choices\n");
			answer = askregistration();
			break;
		case 3:
			printf("Hospitals around Mandaluyong\n");
			printf("..presenting choices\n");
			answer = askregistration();			
			break;
		case 4:
			printf("Hospitals around Manila\n");
			printf("..presenting choices\n");
			answer = askregistration();			
			break;
		case 5:
			printf("Hospitals around Marikini\n");
			printf("..presenting choices\n");
			answer = askregistration();			
			break;
		case 6:
			printf("Hospitals around Muntinlupa\n");
			printf("..presenting choices\n");
			answer = askregistration();			
			break;
		case 7:
			printf("Hospitals around Pasig\n");
			printf("..presenting choices\n");
			answer = askregistration();			
			break;
		case 8:
			printf("Hospitals around Quezon\n");
			printf("..presenting choices\n");
			answer = askregistration();			
			break;
		case 9:
			printf("Hospitals around Valenzuela\n");
			printf("..presenting choices\n");
			answer = askregistration();			
			break;
	}
}

void remove_newline()
{
	char newline;
	scanf("%c",&newline);	
}

void fgets_remove_newline(char a[])
{
	int x = strlen(a);
			if(a[x-1] == '\n')
	{
		a[x-1] = 0;
	}
	
}

int askregistration()
{
	int choice;	
	printf("Register?\n");
	printf("1. Yes 2. No 3. Go back\n");
	scanf("%d", &choice);
	
	if(choice == 1)
	{
		remove_newline();
		return 0;
	}
	else if(choice == 2)
	{
		printf("Session ended.\n");
		exit(0);
	}
	else if(choice == 3)
	{
		choosehospital();
	}
	else
	{
		printf("Invalid choice.\n");
		askregistration();
	}
}

Patient createinfo()
{
	Patient info;
	
	//getting last name
	printf("Last name: ");
	fgets(info.last_name,sizeof(info.last_name),stdin);
	fgets_remove_newline(info.last_name);
	
	//getting first name
	printf("First name: ");
	fgets(info.first_name,sizeof(info.first_name),stdin);
	fgets_remove_newline(info.first_name);
	
	//getting age
	printf("Age: ");
	scanf("%d", &info.age);
	remove_newline();

	//getting sex
	printf("Male or Female? [M or F] ");
	scanf("%c", &info.sex);
	remove_newline();
	
	//checking if sex is in correct format
	if(check_sex(info.sex) == 0)
	{
		printf("Only put M or F.\n");
		exit(0);
	}
	
	//getting contact number
	printf("Contact number: (e.g. 09**-***-****) ");
	fgets(info.number,sizeof(info.number),stdin);
	fgets_remove_newline(info.number);
	
	//checking if the contact number follows the correct format
	if(check_number(info.number) == 0)
	{
		printf("Wrong contact number format.\n");
		exit(0);
	}
	
	//getting address
	printf("Address: ");
	fgets(info.address,sizeof(info.address),stdin);	
	fgets_remove_newline(info.address);	
	
	displayinfo(info);
	return info;
}

bool check_sex(char s[])
{
	if(((s[0] == 'M') || (s[0] == 'F')) && (s[1] == '\0'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool check_number(char num[])
{
	int x = strlen(num);	
	if((x == 13) && (num[0] == '0') && (num[1] == '9') && (num[4] == '-') && (num[8] == '-'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
void displayinfo(Patient info)
{
	printf("\nPatient info: \n");
	printf("Name: %s, %s\n", info.last_name, info.first_name);
	printf("Age: %d\n", info.age);
	printf("Sex: %s\n", info.sex);
	printf("Contact Number: %s\n", info.number);
	printf("Address: %s\n", info.address);
}
