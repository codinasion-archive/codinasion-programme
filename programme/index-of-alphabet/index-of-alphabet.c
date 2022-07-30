//Programme that accepts a char as an input and returns it's position in alphabet

#include <stdio.h>

int main()
{   
    int position;
    char input;
    printf("Enter char that you want to learn his alphabet position:\n");
    scanf("%c", &input);
    if (input >= 97){
        
        position = input - 'a' + 1;
        
    }
    else{
    
        position = input - 'A' + 1;
    
    }
    
    printf("%d", position);
    
}
