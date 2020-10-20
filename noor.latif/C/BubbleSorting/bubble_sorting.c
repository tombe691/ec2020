
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int sorted, tmp;
    int arrsize = 50;
    int arr[arrsize];
    srand(time(NULL));
    int counter = 0;

    printf("Generated array: ");
    for (int i = 0; i < arrsize; i++) {
        arr[i] = (rand() % 25) + 1;
        printf("%2d ", arr[i]);
        counter++;
    }

    do {
        sorted = 0;
        for (int i = 1; i < arrsize; i++) {
            if (arr[i] < arr[i - 1]) {
                tmp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = tmp;
                sorted = 1;
            }
            counter++;
        }

    } while (sorted == 1);

    printf("\nSorted array:    ");
    for (int i = 0; i < arrsize; i++) {
        printf("%2d ", arr[i]);
        counter++;
    }

    printf("\nIn total, there were %d loop executions!\n", counter);
    return 0;
}