#include<stdio.h>

int c = 0;
int count(){
    return ++c;
}

int main() {
    printf("%d\n", count());
    printf("%d\n", count());
    printf("%d\n", count());
}

