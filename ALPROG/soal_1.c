#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double V, J, T;
    
    scanf ("%lf",&J);
    
    scanf ("%lf",&T);
    
    V = J/T;
    
    printf ("%.3lf", V);
        
    return 0;
}