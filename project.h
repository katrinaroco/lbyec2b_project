#ifndef project_h
#define project_h

typedef struct
{
	char hospital[100];
	char last_name[100], first_name[100], address[100];
	char number[15];
	int age;
	char sex[1];
} Patient;

void remove_newline();
void fgets_remove_newline(char a[]);

int askregistration();
Patient createinfo();
bool check_sex(char s[]);
bool check_number(char num[]);
void displayinfo(Patient info);

#endif
