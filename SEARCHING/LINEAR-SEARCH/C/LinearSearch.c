#include <stdio.h>
#include <stdbool.h>

void linearsearch(int*, int, int);

int main(){
	int size; 						
	int findElement;

	printf("Enter the size of the array\n");
	scanf("%d",&size);
	
	int array[size];
	register int i;
	
	for(i=0; i<size; i++){
		scanf("%d", &array[i]);
	}
	
	printf("Enter the element to search in the array\n");
	scanf("%d", &findElement);
	
	linearSearch(array, size, findElement);	
}

/**
 * this function contains the core logic for linear search algorithm
 * 
 * @param array
 * @param size
 * @param findElement
 * 
 * @return void
 **/
void linearSearch(int *array, int size, int findElement){
	register int i;
	bool flag = false;

	for(i=0; i<size; i++){
		if(findElement == array[i]){
			flag = true;
			break;
		}
	}

	if(flag){
		printf("Element found\n");
	}else{
		printf("No element found\n");
	}
}
