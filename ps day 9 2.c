#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int lowestTriangle(int base, int area)
{
    long int x;
    for(x=1;;x++)
    {
        if((base*x)/2>=area)
            return x;
    }
}

int main() {
    int base;
    int area;
    scanf("%d %d", &base, &area);
    int height = lowestTriangle(base, area);
    printf("%ld\n", height);
    return 0;
}
