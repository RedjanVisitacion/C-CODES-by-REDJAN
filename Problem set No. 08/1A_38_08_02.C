#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define p printf
#define s scanf


void separateEvenOdd(int original[], int size, int even[], int *evenSize, int odd[], int *oddSize);

int main() {
    int size, i;
    int *original, *even, *odd;
    int evenSize, oddSize;
    clrscr();

    p("\nEnter The Size Of The Array: ");
    s("%d", &size);


    original = (int *)malloc(size * sizeof(int));
    even = (int *)malloc(size * sizeof(int));
    odd = (int *)malloc(size * sizeof(int));


    if (original == NULL || even == NULL || odd == NULL) {
	p("\nMemory Allocation Failed.\n");
	return 1;
    }


    p("\nEnter The Elements Of The Array:\n");
    for (i = 0; i < size; i++) {
	p("Element %d: ", i + 1);
	s("%d", &original[i]);
    }


    separateEvenOdd(original, size, even, &evenSize, odd, &oddSize);


    p("\nEven Elements:\n");
    for (i = 0; i < evenSize; i++) {
	p("%d ", even[i]);
    }


    p("\nOdd elements:\n");
    for (i = 0; i < oddSize; i++) {
	p("%d ", odd[i]);
    }

    free(original);
    free(even);
    free(odd);

    getch();
    return 0;
}

void separateEvenOdd(int original[], int size, int even[], int *evenSize, int odd[], int *oddSize) {
    int i;
    *evenSize = 0;
    *oddSize = 0;



    for (i = 0; i < size; i++) {
	if (original[i] % 2 == 0) {
	    even[*evenSize] = original[i];
	    (*evenSize)++;
	} else {
	    odd[*oddSize] = original[i];
	    (*oddSize)++;
	}
    }

}