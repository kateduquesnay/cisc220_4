//Assignment 4
//Sarah Carter 10193595
//Katherine DuQuesnay 10138898
//Adele McCallum 10093867
//Dean Wilkins-Reeves 10176758

//Question 1: Matrix Multiplication Program

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int row1;
	int column1;
	int row2;
	int column2;
	int i, j, k;
	int answer;
	/* take the input from user and if answer is invalid exit with error code -1*/
	printf("Insert matrix 1 dimensions separated by a space: ");
	answer=scanf("%d %d", &row1, &column1);
	if(answer==0 || answer==EOF) {
		fprintf(stderr, "Invalid input\n");
		exit(-1);
	}
	/*Loop infinitely using while(1) until break is reached to end loop. Break is reached when the 
	dimensions of matrix 1 and matrix 2 match up (column 1 length is equal to row 2)*/
	while(1)
	 {
		printf("Insert matrix 2 dimensions separated by a space: ");
		answer=scanf("%d %d", &row2, &column2);
		if (answer != 2 || answer == EOF) {
			fprintf(stderr, "invalid Input\n");
			exit(-1);
		}
		if(column1==row2) {
			break; /*exits loop and picks back up at the statement following the loop*/
		}
		fprintf(stderr, "Dimensions Mismatch\n");
	}
 /* Creates to matrices*/
	int matrix1[row1][column1];
	int matrix2[row2][column2];
	
	printf("Input matrix 1 elements separated by spaces: ");
	for(i=0;i<row1;i++) {
		for(j=0;j<column1;j++) {
			answer=scanf("%d", &matrix1[i][j]);
			if(answer==0 || answer==EOF) {
				fprintf(stderr, "Invalid input\n");
				exit(-1);
			}
		}
	}
	
	printf("Input matrix 2 elements separated by spaces: ");
	for(i=0;i<row2;i++) {
		for(j=0;j<column2;j++) {
			answer=scanf("%d", &matrix2[i][j]);
			if(answer==0 || answer==EOF) {
				fprintf(stderr, "Invalid input\n");
				exit(-1);
			}
		}	
	}
    /*print matrix */
	printf("\n Matrix 1: \n");
	for(i=0;i<row1;i++) {
		for(j=0;j<column1;j++) {
			printf("%d\t", matrix1[i][j]);
		}
		printf("\n");
	}

	printf("\n Matrix 2: \n");
	for(i=0;i<row2;i++) {
		for(j=0;j<column2;j++) {
			printf("%d\t", matrix2[i][j]);
		}
		printf("\n");
	}
 /*multiply the two matricies*/ 
	int finalOutput[row1][column2];
	int sum=0;
	printf("\nMultiplication Result:\n");
	for(i=0;i<row1;i++) {
		for(j=0;j<column2;j++) {
			printf("Element [%d,%d] = ",i+1,j+1);
			for(k=0;k<column1;k++) {
				if(k==column1-1)
					printf("%d*%d = ",matrix1[i][k],matrix2[i][j]);
				else
					printf("%d*%d + ",matrix1[i][k],matrix2[i][j]);
				sum+=matrix1[i][k]*matrix2[k][j];
			}
			finalOutput[i][j]=sum;
			printf("%d\n",sum);
		}
	}
	/*print the final matrix*/
	printf("\nFinal Output:\n");
	for(i=0;i<row1;i++) {
		for(j=0;j<column2;j++) {
			printf("%d\t",finalOutput[i][j]);
		}
	}
return 0;
}

