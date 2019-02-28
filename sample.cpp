#include "includes.h"

void *sample_data(void *)
{
    while(1)
    {
        sleep(1);
        printf("sample thread is running\n");
    }
}
