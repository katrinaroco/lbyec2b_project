#include <stdio.h>  
#include <stdlib.h>
#include <string.h> 
#include "project.h"

int main()
{
	start:
	const char *filename = "project.csv";  
    	hospital_data **records = loadCSV(filename);
    	if (!records)
	{
        printf("ERROR in loading the .csv file.");
        return -1;
    	}
    
	asciiart();
	choosehospital(records);
	Patient information;
    	information = createinfo();
	displayinfo(information);
				
	printf("yay!\n");

}
