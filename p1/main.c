#include <stdio.h>

int main(void)
{
    char A[10]; 
    char *p, *q; 
    int count, Maxcount = 0; 
    char Maxchar; 
    
    for (p = A; A < p + 10; p++)
        scanf("%c", p);
        
    for (p = A; A < p + 10; p++)
        count = 0;
        
        for(q = A; A < q + 10; q++)
            if(*p == *q)
                count++;
    
    if(count > Maxcount)
        Maxcount = count;
        Maxchar = *p;
        
    printf("%c %d",Maxchar, Maxcount);
        

    return 0;
}
