#include <stdio.h>
#include <string.h>

void reverse(char str[],char reversed[],int i){ /* Function that reverses the strings with recursive function */
	
	/* İf we want to check different string this function wont run we have to change 5's in the function and add new strings lenght */	
	reversed[i-1]=str[5-i]; /* The last element of string will be first element reserved string */
	
	if(i!=0) reverse(str,reversed,i-1); /* Condition for recursive function for ending */
	
	else reversed[5]='\0';	/* We are adding the null element to last element of reversed string */

	}
 
void merge(int arr[],int p,int q,int r){ /* Function that sort the sequantial array elements */
	
	int n1=q-p+1;
	int n2=r-q;

	int L[n1],M[n2];
	
	for(int i=0;i<n1;i++) L[i]=arr[p+i];
	
	for(int j=0;j<n2;j++) M[j]=arr[q+1+j];

	int i,j,k;
	i=0;
	j=0;
	k=p;

	while(i<n1 && j<n2){
	
	if(L[i]<=M[j]){
	
		arr[k]=L[i];
		i++;
	
		}
	else{
	
		arr[k]=M[j];
		j++;
	
	}
	
	k++;
	
}

	while(i<n1){

	arr[k]=L[i];
	i++;
	k++;
	}

	while(j<n2){
	
	
	arr[k]=M[j];
	j++;
	k++;
	
	
	}	

}

void mergeSort(int arr[],int l,int r){

if(l<r){ /* Condition for recursive function to end if left element higher than right element will be stop function */

	int middle=(r+l)/2;

	
	mergeSort(arr,l,middle);
	mergeSort(arr,middle+1,r);
	merge(arr,l,middle,r);
	
	}
	
}
	
	
	
int main(){

	int i,j;
	int index=0;

	char str[50]={"arara"}; /* Original string */
	char reversed[50];	/* Array for reversed string */
	i=strlen(str); /* For calculating length of string */
	printf("%d\n",i);
	
	reverse(str,reversed,i);
	
	printf("%s\n",str);
	printf("%s\n",reversed);

	for(j=0;j<i;j++){ /* Controlling the string char by char */
		if(str[j]==reversed[j]) index++;
	}
	
	if(index==i) printf("palindrome"); 
	else printf("not palindrome");
	
/***************************************/	

	int arr[6]={6,5,12,10,9,1};
	
	mergeSort(arr,0,5);
	printf("\n");
	
	for(j=0;j<6;j++) printf("%d",arr[j]); 


}
