#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct node{

	char bookname[50];
	char author[50];
	int year;
	struct node *next;
	
};



 struct node* read_file();		/* Function that reads file */
 struct node* insert_node(struct node *root,char *bookname,char *author,int year);	/*Function that inserts the struct*/
 void print_nodes(struct node *root);	/* Function that prints the linked list */
 
 
 int main(){
 	
	read_file();	

 }
 
 
 struct node* read_file(){
 
 
 	FILE *file;
 	
 	struct node *root;
 	int year[10];
 	char name[10][50];
 	char author[10][50];
 	int i=0,j;

 		
 	root=(struct node *) malloc(sizeof(struct node));	/* Defining the head of linked list */
 	
 	root->next=NULL;
 		
 	file=fopen("lab.txt","r");
 	 	
 	while(!feof(file)){
 	
	
 	fscanf(file,"%s %s %d ",name[i],author[i],&year[i]);
	
 	insert_node(root,name[i],author[i],year[i]);
 			
 			i++;
 	}

 	
 print_nodes(root);			
 
 
 
 fclose(file);
 
 }
 
  struct node* insert_node(struct node *root,char *bookname,char *author,int year){
  
  
  while(root->next!=NULL){	/* For the finding end of the linked list */
  
  	root=root->next;
  
  }
  
  root->next=(struct node *) malloc(sizeof(struct node));	/*opening new area for linked list*/
  
  strcpy(root->next->bookname,bookname);
  strcpy(root->next->author,author);
  
  root->next->year=year;
  
  root->next->next=NULL;
  
 
  }
  
  
   void print_nodes(struct node *root){
   
   	while(root!=NULL){
   	
   	printf("%s %s %d\n",root->bookname,root->author,root->year);
   	root=root->next;  	
   	}
   

 }
 
 
 
 
 
