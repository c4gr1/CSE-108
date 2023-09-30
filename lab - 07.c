#include <stdio.h>
#include <string.h>

/*


Functon:concaTalphabeticReverse Sort 
--------
It does: reverse the given string array

n:user enterence number

catStr:for the add words together

maxlen:size of array

result:result of the comperative arrays

counter:number of user's string


*/

/*

void generate tagparsercustomizer

It does : add a new character to given sting and deletes some words

temp:temporary string for function

*/




void part1(); 
void part2();
void generateTagParserCustomized(char temp[],char arr[]);
void concat(char arr[][50],int n,char catStr[]);


int main(){


 part1(); //calling first function
 //part2();



}

void part1(){

	char arr[100][100],temp[100],catStr[100]; // variables of strings
	int counter,i,j; 
	int result;

	printf("enter the count of how many string you will enter...\n");
	scanf("%d",&counter);
	
	for(i=0;i<counter;i++)	{scanf("%s",arr[i]);}
	
	for(i=0;i<counter;i++)	{printf("%d: %s\n",i,arr[i]);}
	
	for(i=0;i<counter;i++){ //comparing strings
		for(j=i+1;j<counter;j++){
	
			result=strcmp(arr[i],arr[j]);
			
			if(result<0){
			
			strcpy(temp,arr[j]);
			strcpy(arr[j],arr[i]);
			strcpy(arr[i],temp);		
			
			
			} 	
		}		
		
	}
	
	 printf("Sorted array is \n");
	
	for(i=0;i<counter;i++) {printf("%d %s\n",i,arr[i]);
	
	strcat(catStr,arr[i]);} //addding string together
	printf("Result is \n");

	printf("%s",catStr);
	
	//	concat(arr[][50],counter,temp[]);
	

		
}

void part2(){

	char a[50],b[50],temp[50];
	
	printf("enter a string:");
	
	scanf("%s",a);


	generateTagParserCustomized(temp,a);


}

void generateTagParserCustomized(char temp[],char arr[]){

		
	int a,b;
	
	a=strlen(arr);
	printf("%d",a);

	if(a<5){
	
	
}
}

void concat(char arr[][50],int n,char catStr[]){

	
	




}
