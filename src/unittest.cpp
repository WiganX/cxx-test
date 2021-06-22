#include <iostream>
#include "gtest/gtest.h"

using namespace std;

TEST(TypeConversions, sign_unsign) {
    unsigned u = 10;
    unsigned u2 = 42;
    EXPECT_EQ(10, u);
    EXPECT_EQ(42, u2);
}