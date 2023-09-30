#include <stdio.h>
#include <string.h>

void part1();
int findmax(int doc[],int start,int end,int result[],int middle);


int main(){


	part1();


}

void part1(){

	int doc[5]={120,200,105,300,295};
	int start=0;
	int end=4;
	int result[4];
	int i;
	int middle=(start+end)/2; /* Middle point of array */

	findmax(doc,start,end,result,middle);
	
	/* Loop for printing elements of result array */
	
	for(i=0;i<4;i++)	printf("\n%d",result[i]);

}

int findmax(int doc[],int start,int end,int result[],int middle){
	
	int mid=middle+1;
	result[0]=doc[start]; /* Starting declaration */
	result[1]=doc[start];
	result[2]=doc[mid];
	result[3]=doc[mid];
		
	if(start<middle){ /* Condition for recursive function to end if left element higher than right element will be stop function */
		
		if(doc[start]>doc[middle])
			result[0]=doc[start];
	
		else if(doc[start]<=doc[middle])
			result[1]=doc[start];

	findmax(doc,start+1,middle,result,middle);
	
			
	}
	
	if(mid<end){ /* Condition for recursive function to end if left element higher than right element will be stop function */
	
		if(doc[mid]>doc[end])
			result[2]=doc[mid];	
		
		else if(doc[mid]<=doc[end])	
			result[3]=doc[mid];
		
	findmax(doc,mid+1,end,result,middle);
	
	}
			
}
