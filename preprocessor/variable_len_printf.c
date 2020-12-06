#include <stdio.h>
#define enable_debug 1
#define DEBUG_LOG(...)   do {if(enable_debug){printf(__VA_ARGS__);}}while(0)
int main(void)
{
 DEBUG_LOG("Hello world\r\n");
 return 0;
}