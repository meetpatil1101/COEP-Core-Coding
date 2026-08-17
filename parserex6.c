#include <stdio.h>
#include <string.h>
void parser(char * string)
{
    for (int i = 0; i < strlen(string); i++)
{
    int in = 0;
    int index = 0;
    if (string[i] == '<')
    in = 1;
    continue;
    else if (string[i] == '>')
    in = 0;
    continue;
    if (in == 0)
    {
        string[index] = string[i];
        index++;
    }
    string[index] = '\0';
}
while(string[0] == ' ')
{  
for (int i = 0; i < strlen(string); i++)
    {
      string[i] = string[i+1];        
    }
for (int i = strlen(string)-1; i >= 0; i--)
    {
        if (string[i] == ' ')
        string[i] = '\0';
        
    }
while(string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }
}
}
int main()
{ 
    char string[] = "<h1> heading of the page </h1>";
    parser(string);
    printf("~~%s~~\n", string);
    return 0;
}