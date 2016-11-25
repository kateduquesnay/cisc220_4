//Assignment 4
//Sarah Carter 10193595
//Katherine DuQuesnay 10138898
//Adele McCallum 10093867
//Dean Wilkins-Reeves 10176758

//Question 3: Capitalizer


#include <stdio.h>

int main( int argc, char *argv[]) {
 
FILE *fp  fopen(filename, "w+");
int counter = 1;
int ch;
char currentword[100]; //character array ---> string for each word in .txt file
done = 0;

while((ch = getc(fp)!=EOF)P{
	if (ch >= 'a' && ch<= 'z' && counter%2!=0){
		//capitalize
		//write to file
		counter ++;
	}//end if
	else{
		//write the original word to file
	}//end else
}//end while
	 
	return 0;
}//end main
 
