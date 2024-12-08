#include <stdlib.h>

typedef struct {
    int profit;
    int duration;
    int deadline;
}job;

extern int ScheduleJobs(const job* jobs, size_t j_size);

int main(void) {

    job jobs1[] = {
      {50, 2, 4},  // Job 0
        {100, 4, 7}, // Job 1
        {30, 1, 3}   // Job 2
    };

    int res = ScheduleJobs(jobs1, 3);

    return 0;
}