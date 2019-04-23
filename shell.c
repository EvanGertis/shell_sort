#include "stdlib.h"
#include "stdio.h"

#define MAX 100

int main(){

    int a[MAX], j, temp, n, k;

    printf("Enter the number of elements that you would like to add to the array: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter the data to be stored at %d: \n", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d | ", a[i]);
    }
    printf("\n");

    while(k >= 1){

        for(int i = k; i < n; i++){
            temp = a[i];
            for(j = i - k; j >= 0 && a[j] > temp; j = j-k){
                a[j+k] = a[j];
            }
            a[j+k] = temp;
        }
        k = k -2;
    }

    for(int i = 0; i < n; i++){
        printf("%d | ", a[i]);
    }
    printf("\n");

}