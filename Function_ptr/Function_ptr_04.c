#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>


 typedef  uint8_t (*ESP_Send)(char *cmd, int lenght, int retry);
 typedef  uint8_t (*ESP_Receive)(char *buffer);
typedef struct 
{
    /* data */
  ESP_Send    WiFi_Send;
  ESP_Receive WiFi_Receive;  
}ESP32_Opt_t;

uint8_t Send(char *cmd, int lenght, int retry)
{
 printf("cmd:%s cmd_len:%d retry:%d\r\n",cmd,lenght,retry); 
 return true;
}

uint8_t Receive( char *bufferr)
{
  strcpy(bufferr, "OK\r");  
  return true;
}
int main(void)
{
  printf("Example: Function_ptr_03: Function pointor within the designated structure\r\n");
  static ESP32_Opt_t ESP32_Opt = 
  {
     .WiFi_Send = Send,
     .WiFi_Receive= Receive,
  } ;     /* Designated structure to pass the fucntion referance */
  char rx_buff[10];
  char tx_buff[]= "AT";
  ESP32_Opt.WiFi_Send(tx_buff, strlen(tx_buff), 2);
  ESP32_Opt.WiFi_Receive(rx_buff);
  printf("Received: %s\r\n", rx_buff);
  return 0;
}