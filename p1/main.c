#include <stdio.h>

int main()
{
    char A[10]; 
    char *p, *q; 
    int count, Maxcount = 0; 
    char Maxchar; 
    
    for (p = A; p < A + 10; p++)
        scanf("%c", p);
        
    for (p = A; p < A + 10; p++)
        count = 0;
        
        for(q = A; q < A + 10; q++)
            if(*p == *q)
                count++;
    
    if(count > Maxcount)
        Maxcount = count;
        Maxchar = *p;
        
    printf("%c %d\n",Maxchar, Maxcount);
        

    return 0;
}
