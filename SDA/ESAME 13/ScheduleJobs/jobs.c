#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    int profit;
    int duration;
    int deadline;
}job;

int compare(const void* a, const void* b) {
    job* JobA = (job*)a;
    job* JobB = (job*)b;

    double AppA = (double)JobA->profit / JobA->duration;
    double AppB = (double)JobB->profit / JobB->duration;

    if (AppA > AppB) {
        return -1;
    } 
    else if (AppA < AppB) {
        return 1;
    }
    else
    {
        return (JobA->duration - JobB->duration);
    }
}

int ScheduleJobs(const job* jobs, size_t j_size) {

    job* job_sorted = malloc(j_size * sizeof(job));
    memcpy(job_sorted, jobs, j_size * sizeof(job));

    qsort(job_sorted, j_size, sizeof(job), compare);

    int current_time = 0;
    int res = 0;
    for (size_t i = 0; i < j_size; ++i) {
        if (current_time + jobs[i].duration <= jobs[i].deadline) {
            current_time += jobs[i].duration;
            res += jobs[i].profit;
            printf("%zu ", i);
        }
    }

    free(job_sorted);
    return res;
}