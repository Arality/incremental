#include <gtest/gtest.h>
#include <thread>
#include <chrono>
#include "util.hpp"


TEST(DeltaTime, Time_Check) {
  util::DeltaTime delta = util::DeltaTime();
  std::this_thread::sleep_for(std::chrono::seconds(5));
  ASSERT_NEAR(5.0, delta.getDeltaTime(), 0.1);
}