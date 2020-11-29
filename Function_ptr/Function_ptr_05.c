#include <stdio.h>

struct event_cb;

typedef void (*event_cb_t)(const struct event_cb *evt, void *user_data);

struct event_cb
{
    event_cb_t cb;
    void *data;
};

static struct event_cb saved = { 0, 0 };

void event_cb_register(event_cb_t cb, void *user_data)
{
    saved.cb = cb;
    saved.data = user_data;
}

static void my_event_cb(const struct event_cb *evt, void *data)
{
    printf("in %s\n", __func__);
    printf("data1: %s\n", (const char *)data);
    printf("data2: %s\n", (const char *)evt->data);
}

int main(void)
{
    char my_custom_data[40] = "Hello!";
    event_cb_register(my_event_cb, my_custom_data);

    saved.cb(&saved, saved.data);

    return 0;
}