#ifndef project_h
#define project_h

typedef struct
{
	char *hospital, *hospital_address;
	char last_name[100], first_name[100], address[100];
	char number[15];
	int age;
	char sex[1];
} Patient;

typedef struct
{
   char *city_name, *hospital_name, *address_name;
} hospital_data;

void remove_newline();
void fgets_remove_newline(char a[]);
void choosehospital(hospital_data **);
void hospital_print(int casenum, hospital_data **);
int choose_hospital_number(hospital_data **);
Patient hospital_number(size_t row, hospital_data **);
int askregistration(hospital_data **);
Patient createinfo(hospital_data **);
bool check_sex(char s[]);
bool check_number(char num[]);
void displayinfo(Patient info, hospital_data **);
char *strsep(char **, const char *);
hospital_data **loadCSV(const char *);
void freeMemory(hospital_data **);

#endif
