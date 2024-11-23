#include <stdio.h>

void insertionSortWithSteps(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        printf("Langkah %d: Menyisipkan %d\n", i, key);
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            for (int k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
        arr[j + 1] = key;

        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n\n");
    }
}

int main() {
    int data[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int n = sizeof(data) / sizeof(data[0]);
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n\n");

    insertionSortWithSteps(data, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}
