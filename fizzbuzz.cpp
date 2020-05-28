#include <stdio.h> 
  
int main(void) 
{ 
    int i; 
    for (i=1; i<=100; i++) 
    { 
        // number divisible by 3 and 5? print 'FizzBuzz'
        if (i%15 == 0)         
            printf ("FizzBuzz\t");     
          
        // number divisible by 3? print 'Fizz' 
        else if ((i%3) == 0)     
            printf("Fizz\t");                  
          
        // number divisible by 5, print 'Buzz'   
        else if ((i%5) == 0)                        
            printf("Buzz\t");                  
      
        else // print the number             
            printf("%d\t", i);                  
  
    } 
  
    return 0; 
} 
