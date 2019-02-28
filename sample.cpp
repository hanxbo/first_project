#include "includes.h"

void *sample_data(void *)
{
    int sample_time = 0;
    socket_package::cmd_type sample_data;

    while(1)
    {
 //       sleep(2);

        sample_time++;
        sample_data.set_id(sample_time);
        sample_data.set_str("sample data");
        sample_data.SerializePartialToArray((void *)global_buf,1024);

        sem_post(&sem_sample);

        printf("sample thread is running\n");
    }
}
