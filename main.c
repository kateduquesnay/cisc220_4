//Assignment 4
//Sarah Carter 10193595
//Katherine DuQuesnay 10138898
//Adele McCallum 10093867
//Dean Wilkins-Reeves 10176758

#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"

int main() {
	char* catString = safestrcat("cat", "dog");
	printf("%s\n", catString);

	substring("Not A Sub String", 11, 5, "");
	return 0;
}
