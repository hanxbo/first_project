#include <stdio.h>
#include "gtest/gtest.h"

int fun(int a)
{
    return a;
}
TEST(FUN_TEST, TEST)
{
    EXPECT_EQ(1, fun(1));
}
