#include <stdio.h>


int main(){
    double a;
    char c;
    double res = 0;

    while(scanf("%lf%c", &a, &c) != EOF) {
        res += a;
        if(c == '\n') {
            printf("%lf\n", res);
            fflush(stdout);
            res = 0.;
            continue;
        }
    }

    printf("%lf\n", res);
    return 0;
}