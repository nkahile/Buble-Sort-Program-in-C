//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
  printf(" Before: \n");
  printValues();
  printf("\n\n");
  sort();
  printf(" After: \n");
  printValues();
  return(0);
} //end main


void printValues(){
    int i;
    for (i=0; i < MAX; i++){
        printf("%d ", values[i]);
    }
}

void sort(){
    int i, j;
     for (i = 0; i<MAX; i++){
        for (j = 0; j<MAX; j++){
            if (values[j] > values[j+1]){
                swap(&values[j], &values[j+1]);
                printValues();
                printf("\n");
            }
        }
    }
}


void swap(int *firstPtr, int *secondPtr){

    int temp = *firstPtr;
    *firstPtr = *secondPtr;
    *secondPtr = temp;
}
