#include <iostream>
#include "gtestx/gtestx.h"

using namespace std;

PERF_TEST(SimpleTest, Demo)
{
  int count = 0;
  for (int i = 0; i < 50000; ++i) {
      count += 2;
  }
}

