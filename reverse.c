#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int sz;
    scanf ("%d",&sz);
    int a[sz];

    for (int i=0; i<sz; i++)
        scanf("%d", &a[i]);

    for (int i=0; i<sz; i++)
        printf("%d", a[sz - i - 1]);
}
