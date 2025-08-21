#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100
#define p printf
#define s scanf

int searchElement(int arr[], int size, int element) {
    int i;

    for (i = 0; i < size; i++) {
	if (arr[i] == element) {
	return i;
	}
    }
    return -1;
}

int main() {
    int size, element, result, i;
    int arr[MAX_SIZE];
    clrscr();


    p("\nEnter The Size Of The Array (Up To %d): ", MAX_SIZE);
    s("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
	p("\nInvalid Array Size.\n");
	return 1;
    }




    p("\nEnter The Elements Of The Array:\n");
    for (i = 0; i < size; i++) {
	printf("Element %d: ", i + 1);
	s("%d", &arr[i]);
    }


    p("\nEnter The Element To Search For: ");
    s("%d", &element);


    result = searchElement(arr, size, element);


    if (result != -1) {
	p("Element %d Found At Position %d.\n", element, result + 1);
    } else {
	p("Element %d Not Found In The Array.\n", element);
    }

    getch();
    return 0;
}