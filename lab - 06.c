#include <stdio.h>

int main(){

	int i,j,k=0;
	char table[26][26];
	char c='A';
	char key[3]={'C','B','A'};
	char plaintext[50];
	char keystream[11];
	char ciphertext[11];
			
	for(j=0;j<26;j++) {	/* First row of table */
	
		table[0][j]='A'+j;
		printf("%c ",table[0][j]);
		
	}
		
	printf("\n");		/* Printing whole table */
		
	for(i=1;i<26;i++){
		for(j=0;j<26;j++){			
		 table[i][0]=c+i;
		 table[i][j+1]=c+i+j+1;
		 if(table[i][j+1]>'Z') {table[i][j+1]=c+k;k++;}	/* Conditions for if letter greate than z */
		 printf("%c ",table[i][j]);
			
		}
		k=0;
		printf("\n");
	}	

	printf("\n***ENCRYPTION***\n");


	
	
}
	
