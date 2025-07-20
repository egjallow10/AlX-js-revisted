#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define MAX_NAME 50

struct Task
{
    char name[MAX_NAME];
    int priority;
    struct Task *next;    
    
};

typedef struct  Task Task;




