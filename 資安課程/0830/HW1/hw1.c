#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int PrivateGame(void);
bool ValidorNot(void);

int PrivateGame(void)
{
    system("/usr/bin/xeyes");
    return 0;
}
int main(void) {
    bool PWverify;
    puts("Welcome to Ones University!");
	puts("Enter your password:");
	PWverify = ValidorNot();
	if (!PWverify) {
		puts("Password Error!! Please try again.");
		return -1;
	}
	else puts("Welcome. Your password is correct.");
	return 0;
}
bool ValidorNot(void) {
	char Password[324];
	gets(Password);
	if (!strcmp(Password, "DevSecOps"))
		return(true);
	else return(false);
}
