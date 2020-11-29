#include <stdio.h>


/*

With GCC family of C compilers, we can mark some functions to execute before and after main(). 
So some startup code can be executed before main() starts, and some cleanup code can be executed after main() ends. 
For example, in the following program, MyConstructor() is called before main() and MyDestructor() is called after main().

*/
#include<stdio.h> 

/* Apply the constructor attribute to myStartupFun() so that it 
	is executed before main() */
void myStartupFun (void) __attribute__ ((constructor)); 


/* Apply the destructor attribute to myCleanupFun() so that it 
is executed after main() */
void myCleanupFun (void) __attribute__ ((destructor)); 


/* implementation of myStartupFun */
void myStartupFun (void) 
{ 
	printf ("startup code before main()\n"); 
} 

/* implementation of myCleanupFun */
void myCleanupFun (void) 
{ 
	printf ("cleanup code after main()\n"); 
} 

int main (void) 
{ 
	printf ("hello\n"); 
	return 0; 
} 
