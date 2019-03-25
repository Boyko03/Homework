#include <stdio.h>

double square_root(double S, int n){
    double x0, x1;
    x0 = S;
    //x((n+1)) = (x((n)) + S/x((n)))/2
    x1 = (x0 + S/x0) / 2;
    for(int i = 1; i < n; i++){
        x1 = (x1 + S/x1) / 2;
     //   x1 = (x0 + S/x0) / 2;
     //   x0 = x1;
    }
    return x1;
}

int main(){
    printf("%f\n", square_root(100, 10));

return 0;
}
