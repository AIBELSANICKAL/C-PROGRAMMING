#include <stdio.h>
int sumofarray(int array[], int size) {
    int sum = 0; 
    for (int i = 0; i < size; i++) {
        sum += array[i]; 
    }
    return sum; 
}
int main() {
    int n; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int array[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int sum = sumofarray(array,n);
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}
