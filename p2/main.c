#include <stdio.h>

int main()
{
    int A[20], B[20];
    int N; 
    
    scanf("%d", &N);
    
    for (int *p = A; A < p + N; p++)
        scanf("%d", p);
        
    for (int *q = B; B < q + N; q++)
        scanf("%d", q);
        
    int *q = B + N - 1;
    for (int *p = A; A < p + N; p++, q++) {
        printf(" %d", *p + *q);
    } printf("\n");

    return 0;
}
