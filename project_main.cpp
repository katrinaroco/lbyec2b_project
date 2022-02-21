#include <stdio.h>  
#include <stdlib.h>
#include <string.h> 
#include "project.h"

int main()
{
	
	int row_num;
	
	start:
	const char *filename = "project.csv";  
    	hospital_data **records = loadCSV(filename);
    	if (!records)
	{
        printf("ERROR in loading the .csv file.");
        return -1;
    	}
    
	asciiart();
	askregistration(records);
				
	//printf("yay!\n");

}
