#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void state(int s0, int s1, int i1, int i2, int* S0, int* S1){
    *S0 = s0 & (!i1) & (!i2) | (!s0) & (!i1) & i2 | (!s0) & (!s1) & i2 | (!s1) & (!i1) & i2 | s0 & (!i1) & (!i2);
    *S1 = s1 & (!i1) & (!i2) | (!s1) & i1 & i2 | (!s0) & i1 & (!i2);
}

void output(int s0, int s1, int* o0, int* o1){
    *o0 = s0;
    *o1 = s1;
} 

