#include <stdio.h>

int main() {
    int a[100], n, i, j, temp;
    float sum = 0, mean, median;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    mean = sum / n;

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    if(n % 2 == 0)
        median = (a[n/2 - 1] + a[n/2]) / 2.0;
    else
        median = a[n/2];

    printf("Mean = %.2f\n", mean);
    printf("Median = %.2f\n", median);

    return 0;
}