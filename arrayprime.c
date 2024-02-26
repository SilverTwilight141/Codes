#include <stdio.h>

int main() {
    int arr[] = {1,2,3};
    int prime = 0;
    
    for (int i = 0; i < 8; i++) {
        for (int j = 2; j < sqrt(arr[i]); j++) {
            if (arr[i] % j == 0) {
                break;
            }
        }
        if (i > sqrt(arr[i])) {
            prime++;
        }
    }
    
    printf("Number of prime numbers in array: %d\n", prime);
    
    return 0;
}
