#include "unity.h" // Single Unity Test Framework include
#include <stdbool.h>
#include <stdio.h>

#include "coding_question2.h"

void setUp(void) { puts("\nsetUp() is called before each test_* function"); }
void tearDown(void) {
  puts("tearDown() is called after each test_* function (unless test is "
       "ignored)");
}

bool timer_callback_stub(timer_s *timer, int index) {
  // first time this function is called, remaining_timer will be zero
  if (timer[index].time_remaining == 0) {
    return true;
  } else {
    timer[index].time_remaining--;
    TEST_MESSAGE("Decrement Time remaining");
    return false;
  }
}

void test_timer_periodic_task(void) {
  timer_s timer[] = {
      {
          0,
          5U,
          timer_0_callback,
      },
      {
          3,
          7,
          timer_1_callback,
      },
      {
          5,
          7,
          timer_0_callback,
      },
  };

  TEST_ASSERT_TRUE(timer_callback_stub(timer, 0));
  // Timer1 starts from 3
  TEST_ASSERT_FALSE(timer_callback_stub(timer, 1));
  TEST_ASSERT_FALSE(timer_callback_stub(timer, 1));
  TEST_ASSERT_FALSE(timer_callback_stub(timer, 1));
  TEST_ASSERT_TRUE(timer_callback_stub(timer, 1));
  // Timer2 starts from 5
  TEST_ASSERT_FALSE(timer_callback_stub(timer, 2));
  TEST_ASSERT_FALSE(timer_callback_stub(timer, 2));
  TEST_ASSERT_FALSE(timer_callback_stub(timer, 2));
  TEST_ASSERT_FALSE(timer_callback_stub(timer, 2));
  TEST_ASSERT_FALSE(timer_callback_stub(timer, 2));
  TEST_ASSERT_TRUE(timer_callback_stub(timer, 2));
}
