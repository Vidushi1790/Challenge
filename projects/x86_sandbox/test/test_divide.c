#include "unity.h" // Single Unity Test Framework include
#include <stdio.h>

#include "coding_question1.h"

void setUp(void) { puts("\nsetUp() is called before each test_* function"); }
void tearDown(void) {
  puts("tearDown() is called after each test_* function (unless test is "
       "ignored)");
}

void test_get_quotient(void) {
  //
  TEST_ASSERT_EQUAL(24, get_quotient(123, 5));
  TEST_ASSERT_EQUAL(200, get_quotient(1000, 5));
  TEST_ASSERT_EQUAL(0, get_quotient(5, 10000));
  TEST_ASSERT_EQUAL(100000, get_quotient(3000000, 30));
  TEST_ASSERT_EQUAL(0, get_quotient(0, 10));
  TEST_ASSERT_EQUAL(32768, get_quotient(32768, 1));
  TEST_ASSERT_EQUAL(65535, get_quotient(65535, 1));
  TEST_ASSERT_EQUAL(1, get_quotient(65535, 65535));
  TEST_ASSERT_EQUAL(0, get_quotient(1, 65535));
  TEST_ASSERT_EQUAL(42, get_quotient(214, 5));
  TEST_ASSERT_EQUAL(126322567, get_quotient(2147483647, 17));
  // Divide by zer will result in termination of the program
  TEST_ASSERT_EQUAL(0, get_quotient(0, 0));
  TEST_ASSERT_EQUAL(0, get_quotient(10, 0));
}

void test_get_remainder(void) {
  TEST_ASSERT_EQUAL(0, get_remainder(10, 5));
  TEST_ASSERT_EQUAL(0, get_remainder(1000, 5));
  TEST_ASSERT_EQUAL(5, get_remainder(5, 10000));
  TEST_ASSERT_EQUAL(0, get_remainder(3000000, 30));
  TEST_ASSERT_EQUAL(0, get_remainder(0, 10));
  TEST_ASSERT_EQUAL(0, get_remainder(1020, 20));
  TEST_ASSERT_EQUAL(3, get_remainder(123.5, 5));
  TEST_ASSERT_EQUAL(1, get_remainder(1, 65535));
  TEST_ASSERT_EQUAL(4, get_remainder(214, 5));
  TEST_ASSERT_EQUAL(8, get_remainder(2147483647, 17));
  // Divide by zer will result in termination of the program
  TEST_ASSERT_EQUAL(0, get_remainder(0, 0));
  TEST_ASSERT_EQUAL(0, get_remainder(10, 0));
}