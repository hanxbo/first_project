
#include "includes.h"

using namespace socket_package;
using namespace std;



sem_t sem_sample;
char global_buf[4096];

int fun(int a)
{
    return a;
}
TEST(FUN_TEST, TEST)
{
    EXPECT_EQ(1, fun(1));
}
int main(void)
{
    pthread_t sample_id, send_id;

    socket_package::cmd_type  msg, msg1;
    char str[100];
    string str1;








    //create a sem
    if(0 != sem_init(&sem_sample, 0, 0))
    {
        perror("sem create fail\n");
    }

    //create sample thread and send thread
    if((0 != pthread_create(&sample_id, NULL, sample_data, NULL))
            || (0 != pthread_create(&send_id, NULL, send_data, NULL)))
    {
        perror("create thread fail\n");
    }

    pthread_join(sample_id, NULL);
    pthread_join(send_id, NULL);

    return 0;
}
