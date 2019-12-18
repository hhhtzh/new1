#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <sys/time.h>
#include <sys/types.h>
#include <semaphore.h>
struct sendval{
int n;
int s;
};
#define LOOP 10000000
#define NUM 4
#define TN 100
#define WRITE_FIRST
