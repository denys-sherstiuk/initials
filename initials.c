#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) 
{
    string name = GetString();
    char a[100];
	int x = 0;
	    
	for (int i = 0, n = strlen(name); i < n; i++) 
	{
	   if ((i == 0) && (name[i] != ' '))
	   {
	        a[x] = toupper(name[i]);
	        x++;
	   }
	   if ((name[i] == ' ') && (name[i+1] != ' ')) 
	   {
	        a[x] = toupper(name[i+1]);
	        x++;
	   }
	}
	    
	printf("%s \n", a);
}
