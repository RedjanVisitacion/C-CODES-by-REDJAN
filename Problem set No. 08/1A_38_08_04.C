#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100
#define p printf
#define s scanf

void Sort(int arr[], int size, int ascending) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
	for (j = 0; j < size - i - 1; j++) {

	    if (ascending && arr[j] > arr[j + 1]) {

		temp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = temp;
	    }

	    else if (!ascending && arr[j] < arr[j + 1]) {

		temp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = temp;
}
}
}
}

void displayArray(int arr[], int size) {
    int i;

    p("\nSorted Array: ");
    for (i = 0; i < size; i++) {
	p("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, i, order;
    int arr[MAX_SIZE];
    clrscr();


    p("\nEnter The Size Of The Array (Up To %d): ", MAX_SIZE);
    s("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
	p("\nInvalid Array Size!...\n");
	return 1;
    }


    p("\nEnter The Elements Of The Array:\n");
    for (i = 0; i < size; i++) {
	p("Element %d: ", i + 1);
	s("%d", &arr[i]);
    }


    p("\nChoose The Sorting Order:\n");
    p("\n1. Ascending Order\n");
    p("2. Descending Order\n");
    p("\nEnter Your Choice (1. or 2.): ");
    s("%d", &order);


    if (order == 1) {
	Sort(arr, size, 1);
	displayArray(arr, size);
    } else if (order == 2) {
	Sort(arr, size, 0);
	displayArray(arr, size);
    } else {
	printf("\nInvalid Choice!...\n");
    }

    getch();
    return 0;
}