#include "coding_question2.h"

static const int timer_expires = 0;
/* Write a function that will manage a list of timers and call an associated
 * callback function when the timer expires. Also, when the timer expires, it
 * shall be restarted.
 *
 * Given is an example timers configuration and the prototype for the main timer
 * periodic task function.
 *
 * - Define the timer_s struct type based on 'timer_s timers_example' below
 * - Implement the timer_periodic_task() function
 * - Test your code in main()
 * - Create more timer configurations, if needed, for testing
 */
void timer_0_callback(void) { puts("Timer 0 Callback"); }
void timer_1_callback(void) { puts("Timer 1 Callback"); }

// Assume this is called back upon each timer tick but for testing at main(), you can invoke this manually
void timer_periodic_task(timer_s *timers, size_t timers_array_size) {
  for (int i = 0; i < timers_array_size; i++) {
    if (timers[i].time_remaining == timer_expires) {
      timers[i].callback();
      timers[i].time_remaining = timers[i].timer_reload_value;
    } else {
      timers[i].time_remaining--;
    }
    printf("R:%d i:%d \r\n", timers[i].time_remaining, i);
  }
}