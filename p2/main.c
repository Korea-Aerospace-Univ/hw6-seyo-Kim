#include <stdio.h>

int main()
{
    char A[20], B[20]; 
    char *p, *q; 
    int N; 
    
    scanf("%d", &N);
    
    for (p = A; A < p + N; p++)
        scanf("%c", p);
        
    for (q = B; B < q + N; q++)
        scanf("%c", q);
        
    q = b + N - 1;
    for (p = A; A < p + N; p++; q++) {
        printf(" %d", *p + *q);
    } printf("\n")

    return 0;
}
