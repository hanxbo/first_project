#ifndef INCLUDES_H
#define INCLUDES_H

#include <stdio.h>
#include <iostream>
#include "gtest/gtest.h"
#include <sys/sem.h>
#include <pthread.h>
#include <errno.h>
#include <unistd.h>
#include <semaphore.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "packageName.MessageName.pb.h"

#define PORT 50000
#define IP "127.0.0.1"

typedef struct tcp_arg_struct tcp_arg;
struct tcp_arg_struct
{
    int socket_fd;
    sockaddr_in sockaddr;
};

extern void *sample_data(void *);
extern void *send_data(void *argu);

extern sem_t sem_sample;
extern char global_buf[4096];

#endif // INCLUDES_H
