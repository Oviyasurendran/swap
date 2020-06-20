#include <stdio.h> 
#include<conio.h>
int main() 
{ 
    int x = 10, y = 5; 
  
    //swapping 'x' and 'y' 
    x = x + y; // x now becomes 15 
    y = x - y; // y becomes 10 
    x = x - y; // x becomes 5 
  
    printf("After Swapping: x = %d, y = %d", x, y); 
  
    return 0; 
} 
