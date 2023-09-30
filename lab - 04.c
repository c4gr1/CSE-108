#include <stdio.h>

void print_file(int number);
void readOrderFile(int *a,int *b);
void print_days(int day);


typedef enum {sunday,monday,tueday,wednesday,thursday,friday,saturday}day;
typedef enum {harddisk,monitor,keyboard,mouse}product;
typedef enum {buy=1,orders,prices,exit}selection;
typedef enum {dolar=4,euro=5,pound=0,peso=10}currencies;
typedef enum {Harddisk=2*dolar,Montior=5*euro,Keyboard=3*pound,Mouse=10*peso}price;

int main(){

int option;
int p;
int d;

int a,b;
int m,n;

do{

printf("Welcome to the TechMarket\n");
printf("1. Buy product\n");
printf("2. Orders\n");
printf("3. All Orders Prices\n");
printf("4. EXIT\n");

scanf("%d",&option);
selection s1;
s1=option;
	
if(s1==buy){
	
	printf("Select your product:\n"); 
	printf("0. Harddisk\n"); 
	printf("1. Monitor\n");
	printf("2. Keyboard\n");
	printf("3. Mouse\n"); 
	printf("4. GO TO MAIN MENU\n");

	scanf("%d",&p);
	product p1;
	p1=p;
	
	switch(p1){
	
		case harddisk : print_file(harddisk); break;
		
		case monitor : print_file(monitor); break;
		
		case keyboard : print_file(keyboard); break;
	
		case mouse : print_file(mouse); break;
		
		default : printf("Invalid operation");
	}
	
		printf("Select your arrival day[0-6]:\n");
		printf("sunday,monday,tueday,wednesday,thursday,friday,saturday\n");
		printf("---------------------");
		scanf("%d",&d);
		print_file(d);
		
	}
	
if(s1==orders){
	
	
	readOrderFile(&a,&b);
	
	printf("product id :%d,day :",a);
	print_days(b); 
	printf("\n");
	
	
	
	
	}
	
if(s1==prices){

	readOrderFile(&a,&b);
	printf("product id :%d,day :",a);
	print_days(b); 
	printf("\n");
	
	price pr1;
	pr1=a;	
	currencies cu1;
	
}		
				
}while(option!=4);

}

void print_file(int number){	
	
	FILE *fp;
	
	fp = fopen("orders.txt","a+");
	fprintf(fp,"%d ",number);
	
	fclose(fp);

}

void readOrderFile(int *a,int *b){

	FILE *fp;
	
	int number,day;
	
	fp = fopen("orders.txt","r");
	fscanf(fp,"%d %d ",&number,&day);
	*a=number;
	*b=day;
	
	fclose(fp);

}

void print_days(int day){


	if(day==0) printf("monday");
	if(day==1) printf("tuesday");
	if(day==2) printf("wednesday");
	if(day==3) printf("thursday");
	if(day==4) printf("friday");
	if(day==5) printf("saturday");
	if(day==6) printf("sunday");
	
}







