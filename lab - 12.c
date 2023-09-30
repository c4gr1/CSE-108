#include <stdio.h>
#include <stdlib.h>

typedef struct{

	int *array;
	int currentsize;

}dynamic_array;


dynamic_array read_from_file(char *filename,dynamic_array arr);

dynamic_array removeData(dynamic_array arr,int number);
	
void print_array(dynamic_array arr);	//Function that prints the value of array

int *resize_array(int *array,int currentsize);


int main(){

	dynamic_array arr;
			
	read_from_file("num.txt",arr);	//Function that takes int from txt

	print_array(arr);

}

dynamic_array read_from_file(char *filename,dynamic_array arr){

	FILE *fp;

	fp = fopen(filename,"r");
	
	arr.currentsize=1;
	int i=0;
	
	arr.array=(int *) calloc(5,sizeof(int)); 
	
	while(!EOF){
	
	fscanf(fp,"%d",&arr.array[i]);
	
	print_array(arr);
	
	i++;
	
	resize_array(arr.array,arr.currentsize);
	
	arr.currentsize++;
		
	}
	
	
	
	fclose(fp);

}

int *resize_array(int *array,int currentsize){


	dynamic_array *copy;

	copy->array=(int *) calloc(currentsize+1,sizeof(int));

	for(int i=0; i<currentsize;i++) copy->array[i]=array[i];
	
	
	free(array);
	


	return copy->array;

}

void print_array(dynamic_array arr){

	for(int i=0;i<arr.currentsize;i++)
		printf("%d\n",arr.array[i]);	


}




