#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "project.h"


void choosehospital (hospital_data **records)
{
	int city, answer, i;
	printf("Please enter your city: \n");
	printf("1. Caloocan\n2. Las Pinas\n3. Mandaluyong\n4. Manila\n5. Marikina\n6. Muntinlupa\n7. Pasig\n8. Quezon\n9. Valenzuela\n");
	scanf("%d", &city);
	
	switch(city){
		case 1:
			printf("Hospitals around Caloocan\n");
			printf("..presenting choices\n");
			hospital_print(city, records);
			break;
		case 2:
			printf("Hospitals around Las Pinas\n");
			printf("..presenting choices\n");
			hospital_print(city, records);
			break;
		case 3:
			printf("Hospitals around Mandaluyong\n");
			printf("..presenting choices\n");
			hospital_print(city, records);		
			break;
		case 4:
			printf("Hospitals around Manila\n");
			printf("..presenting choices\n");
			hospital_print(city, records);			
			break;
		case 5:
			printf("Hospitals around Marikina\n");
			printf("..presenting choices\n");
			hospital_print(city, records);			
			break;
		case 6:
			printf("Hospitals around Muntinlupa\n");
			printf("..presenting choices\n");
			hospital_print(city, records);			
			break;
		case 7:
			printf("Hospitals around Pasig\n");
			printf("..presenting choices\n");
			hospital_print(city, records);		
			break;
		case 8:
			printf("Hospitals around Quezon\n");
			printf("..presenting choices\n");
			hospital_print(city, records);		
			break;
		case 9:
			printf("Hospitals around Valenzuela\n");
			printf("..presenting choices\n");
			hospital_print(city, records);		
			break;
	}
}

void hospital_print(int casenum, hospital_data **data)
{	
	size_t i=0, check, row;
	
	if(casenum == 1){
		for (i = 0; data[i] != NULL; i++){
			check = strcmp(data[i]->city_name, "Caloocan");
			if(check==0){
				row = i;
				printf("%d. %s\n", i+1, data[i]->hospital_name);
			}
		}
	}
	
	else if(casenum == 2){
		for (i = 0; data[i] != NULL; i++){
			check = strcmp(data[i]->city_name, "Las Pinas");
			if(check==0){
				row = i;
				printf("%d. %s\n", i+1, data[i]->hospital_name);
			}
		}
	}

	else if(casenum == 3){
		for (i = 0; data[i] != NULL; i++){
			check = strcmp(data[i]->city_name, "Mandaluyong");
			if(check==0){
				row = i;
				printf("%d. %s\n", i+1, data[i]->hospital_name);
			}
		}
	}

	else if(casenum == 4){
		for (i = 0; data[i] != NULL; i++){
			check = strcmp(data[i]->city_name, "Manila");
			if(check==0){
				row = i;
				printf("%d. %s\n", i+1, data[i]->hospital_name);
			}
		}
	}

	else if(casenum == 5){
		for (i = 0; data[i] != NULL; i++){
			check = strcmp(data[i]->city_name, "Marikina");
			if(check==0){
				row = i;
				printf("%d. %s\n", i+1, data[i]->hospital_name);
			}
		}
	}

	else if(casenum == 6){
		for (i = 0; data[i] != NULL; i++){
			check = strcmp(data[i]->city_name, "Muntinlupa");
			if(check==0){
				row = i;
				printf("%d. %s\n", i+1, data[i]->hospital_name);
			}
		}
	}

	else if(casenum == 7){
		for (i = 0; data[i] != NULL; i++){
			check = strcmp(data[i]->city_name, "Pasig");
			if(check==0){
				row = i;
				printf("%d. %s\n", i+1, data[i]->hospital_name);
			}
		}
	}

	else if(casenum == 8){
		for (i = 0; data[i] != NULL; i++){
			check = strcmp(data[i]->city_name, "Quezon");
			if(check==0){
				row = i;
				printf("%d. %s\n", i+1, data[i]->hospital_name);
			}
		}
	}

	else if(casenum == 9){
		for (i = 0; data[i] != NULL; i++){
			check = strcmp(data[i]->city_name, "Valenzuela");
			if(check==0){
				row = i;
				printf("%d. %s\n", i+1, data[i]->hospital_name);
			}
		}
	}
}

int choose_hospital_number(hospital_data **data)
{
	size_t number;
	
	printf("\nChoose the number of the hospital you'll pick: ");
	scanf("%d", &number);
	remove_newline();
	
	return number;
}

Patient hospital_number(size_t row, hospital_data **data)
{
	Patient info;
	int right_row, i=0;
	
	right_row = row - 1;
	
	info.hospital = data[right_row]->hospital_name;
	info.hospital_address = data[right_row]->address_name;
	
	return info;
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

int askregistration(hospital_data **records)
{
	int choice, row_num;
	Patient information;	
	printf("Register?\n");
	printf("1. Yes 2. No 3. Go back\n");
	scanf("%d", &choice);
	
	if(choice == 1)
	{
		remove_newline();
 	 	information = createinfo(records);
    		row_num = choose_hospital_number(records);
		information = hospital_number(row_num, records);
		displayinfo(information, records);
		
		return 0;
	}
	else if(choice == 2)
	{
		choosehospital(records);
		Patient information;
    	row_num = choose_hospital_number(records);
		information = hospital_number(row_num, records);
		printf("Hospital: %s\n", information.hospital);
		printf("Hospital address: %s\n", information.hospital_address);
	}
	else if(choice == 3)
	{
		printf("Session ended.\n");
		exit(0);
	}
	else
	{
		printf("Invalid choice.\n");
		askregistration(records);
	}
}

Patient createinfo(hospital_data **data)
{
	Patient info;
	int row_num;
	
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
	
	choosehospital(data);
	
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

void displayinfo(Patient info, hospital_data **data)
{
	printf("\nPatient info: \n");
	printf("Name: %s, %s\n", info.last_name, info.first_name);
	printf("Age: %d\n", info.age);
	printf("Sex: %s\n", info.sex);
	printf("Contact Number: %s\n", info.number);
	printf("Address: %s\n", info.address);
	printf("Hospital: %s\n", info.hospital);
	printf("Hospital address: %s\n", info.hospital_address);
}

void asciiart()
{	
	unsigned char c1 = 219; //whole
	unsigned char c2 = 223; //taas
	unsigned char c3 = 220; //baba
	
	printf("%c%c%c%c%c %c%c%c %c%c%c %c%c%c %c%c%c  ", c1, c2, c3, c2, c1, c1, c2, c2, c2, c1, c2, c1, c2, c1, c1, c2, c1); //metro 1
	printf("%c%c%c%c%c %c%c%c %c%c %c %c %c   %c%c%c  ", c1, c2, c3, c2, c1, c3, c2, c1, c1, c3, c1, c1, c1, c3, c2, c1);  //manila 1
	printf("%c%c%c %c%c%c %c%c %c%c%c %c %c%c%c %c%c%c %c\n", c1, c3, c1, c1, c2, c1, c1, c2, c1, c2, c1, c1, c2, c1, c2, c1, c2, c1, c1); //hospital 1
	printf("%c %c %c %c%c%c  %c  %c%c%c %c%c%c  ", c1, c2, c1, c1, c1, c3, c1, c1, c2, c3, c1, c3, c1); //metro 2
	printf("%c %c %c %c%c%c %c %c%c %c %c%c%c %c%c%c  ", c1, c2, c1, c1, c2, c1, c1, c2, c1, c1, c1, c3, c3, c1, c2, c1); //manila 2
	printf("%c%c%c %c%c%c %c%c %c%c%c %c  %c  %c%c%c %c%c%c\n\n", c1, c2, c1, c1, c3, c1, c3, c1, c1, c2, c2, c1, c1, c1, c2, c1, c1, c3, c3); //hospital 2
	
	printf("%c   %c%c%c %c%c%c %c%c%c %c%c%c %c%c%c %c%c%c  ", c1, c1, c2, c1, c1, c2, c2, c3, c2, c1, c2, c1, c2, c1, c2, c1, c1, c2, c1); //locator 1
	printf("%c%c%c %c%c %c %c%c%c  ", c3, c2, c1, c1, c3, c1, c1, c2, c3);  //and 1
	printf("%c%c%c %c%c%c %c%c%c %c %c%c %c%c%c %c%c%c %c%c%c %c%c%c %c %c%c%c %c%c %c\n", c1, c2, c1, c1, c2, c2, c1, c2, c2, c1, c1, c2, c2, c1, c2, c1, c2, c1, c3, c2, c1, c2, c1, c2, c1, c1, c2, c1, c1, c3, c1); //registration 1
	printf("%c%c%c %c%c%c %c%c%c %c%c%c  %c  %c%c%c %c%c%c  ", c1, c3, c3, c1, c3, c1, c1, c3, c3, c1, c2, c1, c1, c1, c3, c1, c1, c2, c3); //locator 2
	printf("%c%c%c %c %c%c %c%c%c  ", c1, c2, c1, c1, c2, c1, c1, c3, c2); //and 2
	printf("%c%c%c %c%c%c %c%c%c %c %c%c  %c  %c%c%c %c%c%c  %c  %c %c%c%c %c %c%c\n\n", c1, c2, c3, c1, c1, c3, c1, c3, c1, c1, c3, c1, c1, c1, c2, c3, c1, c2, c1, c1, c1, c1, c3, c1, c1, c2, c1); //registration 2
	

}

void processWord(char *field, int columnNum, hospital_data *records)
{
    switch (columnNum)
    {
    	case 1:
	       	records->city_name = strdup(field);
	       	//	printf("%s, ", records->city_name);
	  		break;
       	case 2:
       		records->hospital_name = strdup(field);
        	//	printf("%s, ", records->hospital_name);
        	break;
       	case 3:
        	records->address_name = strdup(field);
       		//	printf("%s ", records->address_name);
    }
}

char *strsep(char **input, const char *delim)
{
    char *ptr = *input;
    if (ptr)
    {
        *input += strcspn(*input, delim);
        if (**input)
            *(*input)++ = '\0';
        else
            *input = 0;
    }
    return ptr;
}

hospital_data **loadCSV(const char *filename)
{
    // Open file for reading
    FILE *fp = fopen(filename, "r");
    if (!fp)
    {
        printf("Error reading CSV File. Make sure \"%s\" is present.", filename);
        exit(-1);
    }

    char buffer[1024]; 
    size_t row_count = 0;
    size_t capacity = 0;
    int field_count = 0;
    int isHeader = 1;

    hospital_data **records = NULL; 
    int STEP = 1000;

    while (fgets(buffer, 1024, fp))
    {
        if (isHeader)
        {
            isHeader = 0;
            continue;
        }

        if (row_count == capacity)
        {
            capacity += STEP;
            hospital_data **newreport = (hospital_data **)realloc(records, capacity * sizeof(hospital_data *));
            if (!newreport)
            {
                printf("Memory Reallocation Error!\n");
                exit(-1);
            }
            records = newreport;
        }

        hospital_data *record = (hospital_data *)malloc(sizeof(hospital_data));

        char *line_temp = buffer;
        char *field; 
        field_count = 0;

        while ((field = strsep(&line_temp, ",")) != NULL)
        {
            processWord(field, ++field_count, record);
        }
        records[row_count] = record;
        row_count++;
    }

    if (capacity == row_count)
    {
        hospital_data **newreport = (hospital_data **)realloc(records, (capacity + 1) * sizeof(hospital_data *));
        if (!newreport)
        {
            printf("Reallocation Error!\n");
            exit(-1);
        }
        records = newreport;
    }
    records[row_count] = NULL; 
    fclose(fp);
    return records;
}

void freeMemory(hospital_data **records)
{
	size_t i;
    for (i = 0; records[i] != NULL; ++i)
    {
        free(records[i]->city_name);
        free(records[i]->hospital_name);
        free(records[i]->address_name);
        free(records[i]);
    }
    if (records)
        free(records);
}
