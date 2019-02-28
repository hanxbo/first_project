#include "includes.h"

using namespace std;

static int reconnect(void)
{

}
void *send_data(void *argu)
{
    tcp_arg *arg;
    int connect_time = 0;
    char buf[1024];
    int write_size;
    socket_package::cmd_type send_frame;

    struct sockaddr_in sockaddr;
    int socket_fd;
    socket_fd = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr.sin_family = AF_INET;
    sockaddr.sin_port = htons(PORT);
    sockaddr.sin_addr.s_addr = inet_addr(IP);

    arg = (tcp_arg *)arg;
    while(connect(socket_fd, (struct sockaddr *)&sockaddr, sizeof(struct sockaddr_in)) < 0
          && connect_time < 3)
    {
        printf("thread send data connect failed %d times\n", connect_time);
    }
    if(connect_time >= 3)
    {
        pthread_exit(NULL);
    }
    while(1)
    {
        sem_wait(&sem_sample);

        send_frame.ParseFromArray((void *)global_buf, 1024);
        cout << "send frame id = " << send_frame.id() << endl;
        cout << "send frame str = " << send_frame.str() << endl;

        write_size = write(socket_fd, &global_buf, 1000);
        if(write_size == -1)
        {
            perror("write");
        }
        printf("send data size: %d\n", write_size);
    }
}
