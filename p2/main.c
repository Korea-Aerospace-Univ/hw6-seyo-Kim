#include <stdio.h>

int main()
{
    int A[20], B[20];
    int N; 
    
    scanf("%d", &N);
    
    for (int *p = A; p < A + N; p++)
        scanf("%d", p);
        
    for (int *q = B; q < B + N; q++)
        scanf("%d", q);
        
    int *q = B + N - 1;
    for (int *p = A; p < A + N; p++, q--) {
        printf(" %d", *p + *q);
    } printf("\n");

    return 0;
}
