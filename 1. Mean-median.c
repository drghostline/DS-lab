#include <stdio.h>
#include <conio.h>
#include <math.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[100];
    int n, i, choice;
    int min, max, sum;
    float mean, median;
    int gcd_val, lcm_val;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while (1) {
        printf("\n1. Mean\n2. Median\n3. GCD\n4. LCM\n5. Minimum\n6. Maximum\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Mean
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += a[i];
                }
                mean = (float)sum / n;
                printf("Mean: %.2f\n", mean);
                break;

            case 2: // Median
                sort(a, n);
                if (n % 2 == 0) {
                    median = (a[n/2 - 1] + a[n/2]) / 2.0;
                } else {
                    median = a[n/2];
                }
                printf("Median: %.2f\n", median);
                break;

            case 3: // GCD
                if (n < 2) {
                    printf("Need at least 2 numbers for GCD\n");
                } else {
                    gcd_val = a[0];
                    for (i = 1; i < n; i++) {
                        gcd_val = gcd(gcd_val, a[i]);
                    }
                    printf("GCD: %d\n", gcd_val);
                }
                break;

            case 4: // LCM
                if (n < 2) {
                    printf("Need at least 2 numbers for LCM\n");
                } else {
                    lcm_val = a[0];
                    for (i = 1; i < n; i++) {
                        lcm_val = lcm(lcm_val, a[i]);
                    }
                    printf("LCM: %d\n", lcm_val);
                }
                break;

            case 5: // Minimum
                min = a[0];
                for (i = 1; i < n; i++) {
                    if (a[i] < min) {
                        min = a[i];
                    }
                }
                printf("Minimum: %d\n", min);
                break;

            case 6: // Maximum
                max = a[0];
                for (i = 1; i < n; i++) {
                    if (a[i] > max) {
                        max = a[i];
                    }
                }
                printf("Maximum: %d\n", max);
                break;

            case 7: // Exit
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
