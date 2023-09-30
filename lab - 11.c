#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct b{

	char title[50];
	char author[50];
	char subject[50];
	int year;
	
}book; /*Defining Struct*/

int main(){

	book *library;	/* variable for struct */
	book temp;

	int selection,choice; /* Variable for switch case*/
			
	int j=0,l=0;
	int m;
	
	library=(book *) malloc(5*sizeof(book)); /* Dynamic allocation for struct array */
	
	do{

	/* Menu for user to use library */
	
	printf("\nMENU \n");
	printf("1.Add New Book\n");
	printf("2. List Books\n");
	printf("3. EXIT\n\n");
	
	printf("Choose =");
	
	scanf("%d%*c",&selection);
	
	/* according to user selection switch case part */
	
	switch(selection){
	

		case 1:		/* Taking books information from user */
		
				printf("Please enter book title:");
			  	scanf("%[^\n]%*c",library[j].title);
													   	
			   	printf("Please enter book author:");
			   	scanf("%[^\n]%*c",library[j].author);
		
				printf("Please enter book subject:");
			   	scanf("%[^\n]%*c",library[j].subject);
			   	
			   	printf("Please enter book year:");
			   	scanf("%d",&library[j].year);	

			   	j++;
			   	
			   	break;
			   		
	
		case 2: /*Functions for sorting and listing books*/
		
				printf("SUBMENU\n");
				printf("1. Get by title\n");
				printf("2. Get by author\n");
				printf("3. Get by subject\n");
				printf("4. sorted list by year\n");
				printf("5. list all menu\n");
				printf("6. EXIT SUBMENU\n");
				scanf("%d%*c",&choice);
				
				if(choice==1){	/*Sorting by title*/
				
				printf("\nPlease enter book title:");
			   	scanf("%[^\n]%*c",temp.title);
			   	
			   	for(m=0;m<j;m++){	/*Searching user input*/
			   	
			   		if(strcmp(library[m].title,temp.title)==0){ 
			   		printf("Book Founded\n");
			   		
			   		printf("subject-> %s \n Author -> %s \n Year -> %d\n",library[m].subject,library[m].author,library[m].year);
			   				   		
			   			}
						
					}
			
				}
				
				if(choice==2){	/*Sorting by author*/
				
				printf("\nPlease enter book author:");
			   	scanf("%[^\n]%*c",temp.author);
			   	
			   	for(m=0;m<j;m++){
			   	
			   		if(strcmp(library[m].author,temp.author)==0){ 
			   		printf("Book Founded\n");
			   		
			   		printf("subject-> %s \n title -> %s \n Year -> %d\n",library[m].subject,library[m].title,library[m].year);
			   				   		
			   			}
						
					}
			
				}
				
				if(choice==3){	/*Sorting by subject*/
				
				printf("\nPlease enter book subject:");
			   	scanf("%[^\n]%*c",temp.subject);
			   	
			   	for(m=0;m<j;m++){
			   	
			   		if(strcmp(library[m].subject,temp.subject)==0){ 
			   		printf("Book Founded\n");
			   		
			   		printf("Title-> %s \n Author -> %s \n Year -> %d\n",library[m].title,library[m].author,library[m].year);
			   				   		
			   			}
						
					}
			
				}
								
				else if(choice==5){ /*terminate conditions*/
				
				int k;
	
				printf("List of Books\n********************************\n");
	
				for(k=0;k<j;k++)	printf("%d. BOOK \n Title-> %s \n Author -> %s \n Subject-> %s \n Year -> %d\n********************************\n",k+1,library[k].title,library[k].author,library[k].subject,library[k].year);
				
				
				
				
				}
				
				break;
				
		default: printf("Enter a valid number.\n");
	
	
	}
	

	}while(selection!=3 );	/*Terminate conditions*/

	


}
