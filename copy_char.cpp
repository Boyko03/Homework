#include <stdio.h>

int length(char *a){
    char *start = a;
    while(*(a++));

    return a - start;
}

void copy(char *a, char *b){
    int len = length(b);
    for(int i = 0; i < len; i++){
        a[i] = b[i];
    }
}

int main(){
    char a[6];
    char b[] = "hello";
    copy(a, b);
    printf("%s\n", a);
}