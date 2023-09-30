#include <stdio.h>

typedef struct {

	char arr[10];
	int x;


}struct_number;


typedef struct{

		int n;
		int r;
		int result;

}struct_combinational;

int factorial(int n); /*Function that calculates*/
int is_number(char *number_as_str,int lenght_of_string); /*Checks the input*/
int parse_to_int(char *number_as_str,int lenght_of_str); /*convert string to int */
int str_len(char *str); /*calculates the lenght of ınput*/
int base_converter(int decimal,int base);

int main(){

	int x,y;
	int m,n,k;
	int f;
	
	struct_number a;
	
		
	printf("Enter number :");
	scanf("%d",&f);
	f=factorial(f);
	printf("---%d---\n",f);

	printf("Enter 2 number :");
	scanf("%s %d",a.arr,&a.x);

	
	x=str_len(a.arr);
	printf("---string lenght %d---",x);
	
	y=parse_to_int(a.arr,x);
	
	printf("\n---%d---",y);
	
	printf("enter decimal number and base\n ");
	scanf("%d %d",&m,&n);
	
	k=base_converter(m,n);
	printf("\n---%d---",k);
	
}

int str_len(char *str){ /*Calculates lenght of string with recursive*/

	int i=0;
	
	if(str[i]=='\0') return 0;	
	
	else {
	
	return 1+str_len(&str[i+1]);
		
		
	}
	
}

int parse_to_int(char *number_as_str,int lenght_of_str){

	int i=0,j;
			
	j=(number_as_str[0]-48);
		
	if(i=lenght_of_str) return 1;
	
	else return 10*j+parse_to_int(&number_as_str[i+1],lenght_of_str);
	
}

int base_converter(int decimal,int base){

	int a,b;
	
	a=decimal%base;
	b=decimal/base;
	
	if(b==1)	return a;
	
	else return 10*base_converter(b,base);
}

int factorial(int n){

	if(n==0) return 1;

	else 
	
	return n*factorial(n-1);	/* Returns factorial */

}

