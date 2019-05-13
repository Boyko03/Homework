#include <stdio.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void reverse(int *a, int size){
    int f = size / 2;
    for(int i = 0; i < f; i++){
        swap(&a[i], &a[size - i - 1]);
    }
}

void print_array(int *a, int size){
    for(int i = 0; i < size; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}

int main(){
    int a[] = {1, 2, 7, 15, 4};
    int size = sizeof(a) / sizeof(a[0]);
    print_array(a, size);
    reverse(a, size);
    printf("Reversed: \n");
    print_array(a, size);

    return 0;
}
