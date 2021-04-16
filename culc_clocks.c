#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(){
    clock_t start, end;
    start = clock();
    sleep(1);
    end = clock();
    printf("start: %ld\nend: %ld\nstart - end: %ld\n",
        (long)start, (long)end, (long)start - (long)end);
    return 0;
}

