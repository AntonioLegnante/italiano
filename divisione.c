/*divisione in sillabe by AntonioLegnante*/

#include <stdio.h>

int main ()
{
    enum stato {vocaleiniziale, consonantevocale};
    char a;
    enum stato stato = vocaleiniziale;

    while((a = getchar()) != EOF)
    {
        if(stato == vocaleiniziale)
        {
            if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            {
                stato = consonantevocale;
                putchar(a);
                putchar('\t');
            }
            else    
            {
                putchar(a);
                stato = consonantevocale;
            }
        }
        else if(stato == consonantevocale)
        {
            if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')    
            {
                putchar(a);
                putchar('\t');
            }
            else    putchar(a); 
        }
    }
return 0;
}
        
            
                                  