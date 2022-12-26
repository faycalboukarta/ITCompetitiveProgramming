#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int monotone = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            monotone = 0; 
            break;
        }
    }

    if (monotone) {
        printf("The array is monotone.\n");
    } else {
        printf("The array is not monotone.\n");
    }

    return 0;
}
