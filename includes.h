#ifndef INCLUDES_H
#define INCLUDES_H

#include <stdio.h>
#include "gtest/gtest.h"
#include <sys/sem.h>
#include <pthread.h>
#include <errno.h>
#include <unistd.h>

extern void *sample_data(void *);
#endif // INCLUDES_H
