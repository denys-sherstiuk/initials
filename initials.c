#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = GetString();
    
    // print first character
    printf("%c", toupper(name[0]));
   
    for ( int i = 0, n = strlen(name); i < n; i++)
    {
        // check space and end of characters
        if ( name[i] == ' ' && name[i + 1] != '\0') 
        {
            // print the rest of the initials and increment
            printf("%c",toupper(name[i + 1])); 
            i++;
      
        }
       
    }
    
    printf("\n"); 
}

