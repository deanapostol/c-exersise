#include <stdio.h>
#define MAX 5

void printscan(int i, float numbers[]) {
    printf("Enter number %d of array: ", i + 1);
    scanf("%f", &numbers[i]);
}

void multiply(int n, float numbers[], float multi) {
    printf("Enter a number to multiply: ");
    scanf("%f", &multi);
    for (int i = 0; i < n; i++) {
        numbers[i] = numbers[i] * multi;
    }
}

void remzeros(float numbers[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%f\n", numbers[i]);
        if (numbers[i] == (int)numbers[i]) {
            printf("%d", (int)numbers[i]);
        } else {
            printf("%d,", (int)numbers[i]);
        }
        while (numbers[i] - (int)numbers[i] != 0) {
            numbers[i] = numbers[i] - (int)numbers[i];
            numbers[i] = numbers[i] * 10;
            printf("%d", (int)numbers[i]);
        }
        printf("\n");
    }
}

void roundup(float numbers[], int n) {
    float var1, var2, numbers0[MAX];
    for (int i = 0; i < n; i++) {
        var2 = numbers[i];
        var1 = numbers[i] - (int)numbers[i];
        if (var1 >= 0.5) {
            var1 = -1;
            numbers[i] += var1;
        } else if (var1 < 0.5) {
            numbers[i] -= var1;
        }
        numbers0[i] = numbers[i];
        printf("%f", numbers0[i]);
        numbers[i] = var2;
    }
}

void remdouble(float numbers[], int n, int* x, float numbers2[]) {
    int exists = 0;
    float numbers1[MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < *x; j++) {
            if (numbers[i] == numbers1[j]) {
                exists = 1;
            }
        }
        if (!exists) {
            numbers1[*x] = numbers[i];
            (*x)++;
        }
        exists = 0;
    }

    for (int i = 0; i < *x; i++) {
        numbers2[i] = numbers1[i];
    }
}

int main() {
    int x = 0;
    float numbers[MAX], multi, numbers2[MAX], final[MAX];

    for (int i = 0; i < MAX; i++) {
        printscan(i, numbers);
    }

    multiply(MAX, numbers, multi);
    remzeros(numbers, MAX);
    remdouble(numbers, MAX, &x, numbers2);

    // Use 'final' array for further processing or printing

    return 0;
}
