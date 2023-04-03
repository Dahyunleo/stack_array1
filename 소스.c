#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int data, int i) {
   
    top++;
    stack[top] = data;
    printf("[%2d] Push %d \n",i, data);
}

void pop(int i) {
    
    int data = stack[top];
    top--;
    
    printf("[%2d] Pop %d \n", i,data);
}
int is_full()
{
 if (top >= MAX_SIZE - 1) {
        printf("Stack Full!\n");
        return;
    }
}
int is_empty()
{
if (top < 0) {
        printf("Stack Empty!\n");
        return;
    }
}
int main() {
    srand(time(NULL)); 
    int i, num;
    printf("-----Using array-----\n");
    for (i = 1; i <= 30; i++) {
        
        num = rand() % 100 + 1; 
        
        
        if (num % 2 == 0) {
            is_full();
            push(num,i);
        }
        else {
            is_empty();
            pop(i);
        }
    }
    return 0;
}
