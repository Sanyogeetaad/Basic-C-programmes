#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include <conio.h>
bool Login(char user[], char password[]) {
	//username and password 
	char storeduser[20] = "user";
	char storedpass[20] = "pass";
	//check if user enters correct username and password
	if (strcmp(storeduser, user)==0 && strcmp(storedpass, password)==0)
		return true;
	else
		return false;
}
void main() {
	char user[20], password[20];
	int i = 0;
	//Ask user to enter username and password
	printf("Enter username:\n");
	scanf_s("%19s", user, sizeof(user));
	printf("Enter password:\n");
	//scanf_s("%20s",password, sizeof(password));
	while (1) {
		char ch = _getch();
		if (ch == '\r' || ch == '\n')
			break;
		if (i < 19)
			password[i++] = ch;
		printf("*");
	}
	password[i] = '\0';
	bool res = Login(user, password);
	if (res)
		printf("Login successfuk");
	else
		printf("invalid username or password");
}