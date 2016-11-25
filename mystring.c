//assignment 4
//Sarah Carter 10193595
//Katherine DuQuesnay 10138898
//Adele McCallum 10093867
//Dean Wilkins-Reeves 10176758

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mystring.h"

char *safestrcat(char *a, char *b) {
	char *returnString = malloc(strlen(a)+strlen(b)+1);
	
	strcpy(returnString, a);
	strcat(returnString, b);
	return returnString;
}

int substring(char *source, int from, int n, char *target) {
	//check validity
	if ((from + n) > strlen(source) || n < 1 || from < 0 || source == NULL) {
		return -1; //failure
	}

	int i;
	for (i=0; i < n; i=i+1){
		target[i] = source[from+i];
	}
	return 0;//success
}
