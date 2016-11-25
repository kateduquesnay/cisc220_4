//Assignment 4
//Sarah Carter 10193595
//Katherine DuQuesnay 10138898
//Adele McCallum 10093867
//Dean Wilkins-Reeves 10176758

//Question 3: Capitalizer




#include <stdio.h>

int main( int argc, char *argv[]) {
FILE *fp  fopen(argv[1], "w+");
int counter = 1;
int ch;
char currentword[100]; //character array ---> string for each word in .txt file
done = 0;

	//word by word with spaces as delimiters
while((ch = fscanf(fp)!=EOF)P{
    currentword = fscanf(fp, "%s", currentword);
	if (ch >= 'a' && ch<= 'z' && counter%2!=0){
		//capitalize first letter
		toupper(currentword[0]);
		//write to file
		fprintf(FILE *fp, currentword);
		counter ++;
	}//end if
	//is a number, does not need to be capitalized, written to new file as is
	else{
		fprintf(FILE *fp, currentword);
	}//end else
	//reach end of file
	break;
}//end while
      fclose(fp);
	 
	return 0;
}//end main

