#include <gtest/gtest.h>
#include "../include/GreatestCommonDivisor.h"

TEST(test_01, basic_test_set) {
  int num1 = 5;
  int num2 = 10;
  int result = NOD(num1, num2);
  ASSERT_TRUE(result == 5);
}

TEST(test_02, basic_test_set) {
  int num1 = -6;
  int num2 = 33;
  int result = NOD(num1, num2);
  ASSERT_TRUE(result == 3);
}

TEST(test_03, basic_test_set) {
  int num1 = -40;
  int num2 = -24;
  int result = NOD(num1, num2);
  ASSERT_TRUE(result == 8);
}

TEST(test_04, basic_test_set) {
  int num1 = 0;
  int num2 = 5;
  int result = NOD(num1, num2);
  ASSERT_TRUE(result == 5);
}

TEST(should_throw_exception_because_two_nulls, basic_test_set) { 
  int num1 = 0;
  int num2 = 0;
  ASSERT_THROW(NOD(0, 0), ZerosInputException);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}