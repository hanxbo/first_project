
#include "includes.h"

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
    pthread_t sample_id;

    if(0 != pthread_create(&sample_id, NULL, sample_data, NULL))
    {
        perror("create sample thread");
    }

    pthread_join(sample_id, NULL);
}
