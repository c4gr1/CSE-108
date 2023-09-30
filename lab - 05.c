#include <stdio.h>

void part1();
void display(int a);
void part2();
void part3();
void part4();

int main(){

int selection;

do{

/* Selection part of user */

printf("Chose the matrix operation\n");
printf("--------------------------\n");
printf("1. Convolutional Filter for 1D array\n");
printf("2. Multiplication\n");
printf("3. Trace\n");
printf("4. Transpose\n");
printf("5 Exit\n");
printf("--------------------------\n");
printf("Enter your choice ");

scanf("%d",&selection);

if(selection==1) part1();

if(selection==2) part2();

if(selection==3) part3();

if(selection==4) part4();


}while(selection!=5); /* Limitation for user */



}

void part1(){

int arr[10];
int result[10];
int i;
	printf("Enter the 10 elements array :");
	
	for(i=0;i<10;i++) scanf("%d",&arr[i]); /* printing part for user */
	
	printf("1D array \n");
	
	for(i=0;i<10;i++) {display(arr[i]); printf("\t"); }
	
	printf("\n");
	
	printf("Convolutional Filter Result : \n"); /* results of the calculation */
	
	for(i=0;i<8;i++){
	
	result[i]=(arr[i]*-1)+(arr[i+1]*1)+(arr[i+2]*-1);
	
	}
	for(i=0;i<8;i++){
	
	display(result[i]); printf("\t");
	
	}
	
	printf("\n");


}

void display(int a){

	printf("%d",a); /* Function for printing array elements */

}

void part2(){

	int a[3][3],b[3][3],r[3][3];
	int i,j,k;
	
	printf("Enter the 2D matrices :\n\n");
	printf("--------------\n");
	printf("Enter the first dimension\n\n");
		
	for(i=0;i<3;i++){ 
		for(j=0;j<3;j++) scanf("%d",&a[i][j]);}
	
	printf("--------------\n");
	printf("Enter the second dimension\n\n");
		
	for(i=0;i<3;i++){ 
		for(j=0;j<3;j++) scanf("%d",&b[i][j]);}	
		
	printf("First Matrix \n\n");
				
	for(i=0;i<3;i++){ 
		for(j=0;j<3;j++) {display(a[i][j]); printf("\t"); }
	printf("\n");
	}
		
	printf("Second Matrix \n\n");	
			
	for(i=0;i<3;i++){ 
		for(j=0;j<3;j++) {display(b[i][j]); printf("\t"); }
	printf("\n");
	}
	
	printf("Multiplication of matrix :\n"); /* Multiplication of arrays */
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
		
		r[i][j]=a[i][j]*b[j][i];
		
		}
			
			
	for(i=0;i<3;i++){  /* results of the calculation */
		for(j=0;j<3;j++) {display(r[i][j]); printf("\t"); }
	printf("\n");		

		}

}

void part3(){

	int a[3][3],b[3][3],sum1=0,sum2=0;
	int i,j;
	
	printf("--------------\n");
	printf("Enter the array\n\n");
		
	for(i=0;i<3;i++){ 
		for(j=0;j<3;j++) scanf("%d",&a[i][j]);}	
		
	printf("First Matrix \n\n");
				
	for(i=0;i<3;i++){ /* results of the calculation */
		for(j=0;j<3;j++) {display(a[i][j]); printf("\t"); }
	printf("\n");
	
	}
	
	for(i=0;i<3;i++){
	
		sum1=sum1+a[i][i];
		
		}
		
	printf("\nTrace of matrix = %d",sum1);
		
	printf("\nSecond Matrix \n\n");
	
	for(i=0;i<3;i++){ 
		for(j=0;j<3;j++) scanf("%d",&b[i][j]);}
		
	for(i=0;i<3;i++){
	
		sum2=sum2+b[i][i];
		
		}			
			
	for(i=0;i<3;i++){ /* results of the calculation */
		for(j=0;j<3;j++) {display(b[i][j]); printf("\t"); }
	printf("\n");
	}
			
	printf("\nTrace of matrix\n = %d",sum2);


}

void part4(){

	int a[3][3],b[3][3],c[3][3],d[3][3];
	int i,j;
	
	printf("--------------\n");
	printf("Enter the array\n\n");
		
	for(i=0;i<3;i++){ 
		for(j=0;j<3;j++) scanf("%d",&a[i][j]);}	
		
	printf("\nTranspose of first matrices\n");
				
	for(i=0;i<3;i++){  /* results of the calculation */
		for(j=0;j<3;j++) {c[i][j]=a[j][i]; display(c[i][j]); printf("\t");}
	printf("\n");
	}

	printf("\nSecond Matrix \n\n");
	
	for(i=0;i<3;i++){ 
		for(j=0;j<3;j++) scanf("%d",&b[i][j]);}

	printf("\nTranspose of second matrices\n");
	
	for(i=0;i<3;i++){  /* results of the calculation */
		for(j=0;j<3;j++) {d[i][j]=b[j][i]; display(d[i][j]); printf("\t");}
	printf("\n");
}
}



