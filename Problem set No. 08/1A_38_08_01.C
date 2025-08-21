#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define p printf
#define s scanf

void rArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while (start < end) {

	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;


	start++;
	end--;}
}

int main() {
    int size, i;
    int *arr;
    clrscr();

    p("\nEnter The Size Of The Array: ");
    s("%d", &size);


    *arr = (int *)malloc(size * sizeof(int));


    if (arr == NULL) {
	p("\nMemory allocation failed.\n");
	return 1;
}


    p("\nEnter The Elements Of The Array:\n");
    for (i = 0; i < size; i++) {
	p("Element %d: ", i + 1);
	s("%d", &arr[i]);
    }


    rArray(arr, size);


    p("\nReversed Array:\n");
    for (i = 0; i < size; i++) {
	p("%d ", arr[i]);
    }

    free(arr);

    getch();
    return 0;
}