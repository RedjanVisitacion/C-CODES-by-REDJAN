#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100
#define p printf
#define s scanf

void Sort(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {

    if (arr[j] > arr[j + 1]) {

    temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
}
}
}
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

void displayArray(int arr[], int size, const char *message) {
    int i;

    p("%s: ", message);
    for (i = 0; i < size; i++) {
	p("%d ", arr[i]);
    }
    p("\n");
}

int main() {
    int size, i;
    int arr[MAX_SIZE];
    int even[MAX_SIZE], odd[MAX_SIZE];
    int evenSize, oddSize;
    clrscr();


    p("\nEnter The Size Of The Array (Up To %d): ", MAX_SIZE);
    s("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
	p("Invalid Array Size!...\n");

	getch();
	return 1;
    }


    p("Enter The Elements Of The Array:\n");
    for (i = 0; i < size; i++) {
	p("\nElement %d: ", i + 1);
	s("%d", &arr[i]);
    }


    separateEvenOdd(arr, size, even, &evenSize, odd, &oddSize);


    Sort(even, evenSize);
    displayArray(even, evenSize, "\nSorted Even Elements");


    Sort(odd, oddSize);
    displayArray(odd, oddSize, "\nSorted Odd Elements");

    getch();
    return 0;
}