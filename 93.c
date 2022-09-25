#include<stdio.h>

int main() {

    int arr[24] = { 0, };

    int num;
    int num2;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        scanf("%d", &num2);
        arr[num2] += 1;
    }

    for (int j = 1; j < 24; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
