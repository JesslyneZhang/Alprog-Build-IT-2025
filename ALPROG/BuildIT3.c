#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A, B, C;
    
    scanf ("%d", &A);
    scanf ("%d", &B);
    
    for (int i = A; i <= B; i++) {
        C = C+i;
    }
    
    printf ("%d", C);
    return 0;
}
