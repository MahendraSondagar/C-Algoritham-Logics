#include <stdio.h>

/* Selecting the code features from the degined macros */
#define SOCKET_TCP  0U
#define SOCKET_UDP  0U
#define SOCKET_MQTT 1U
#define SOCKET_HTTP 0U


void ESP32_TCP_init(void);
void ESP32_MQTT_init(void);
void ESP32_UDP_init(void);
void ESP32_HTTP_init(void);

int main(void)
{

    #if (SOCKET_TCP==1)
        ESP32_TCP_init();
    #endif 

    #if (SOCKET_MQTT==1)
        ESP32_MQTT_init();
    #endif 

    #if (SOCKET_UDP==1)
        ESP32_UDP_init();
    #endif 
    #if (SOCKET_HTTP==1)
        ESP32_HTTP_init();
    #endif 



}


#if (SOCKET_MQTT==1)

    void ESP32_MQTT_init(void)
    {
    printf ("Exectiting MQTT AT commands...\r\n");
    }
#endif

#if (SOCKET_TCP==1)
    void ESP32_TCP_init(void)
    {

    printf ("Exectiting TCP AT commands...\r\n");
    }
#endif

#if (SOCKET_HTTP==1)
    void ESP32_HTTP_init(void)
    {

      printf ("Exectiting HTTP AT commands...\r\n");
    }
#endif

#if (SOCKET_UDP==1)
void ESP32_UDP_init(void)
{

  printf ("Exectiting UDP AT commands...\r\n");
}
#endif