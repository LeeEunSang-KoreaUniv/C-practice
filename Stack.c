#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int stack_list[1000];
	int index;
}STACK;

STACK* CreateStack() {
	STACK* s = NULL;
	s = (STACK*)malloc(sizeof(STACK));
	if (s == NULL) {
		printf("메모리 할당 실패 \n");
	}
	else {
		memset(s, 0, sizeof(STACK));
		return s;
	}
}
void DeleteStack(STACK* st) {
	if (st != NULL) {
		free(st);
	}
}

void Push(int a, STACK* st) {
	if (st != NULL) {
		(st->stack_list)[st->index] = a;
		(st->index)++;
	}
}
void Pop(STACK* st) {
	if (st != NULL) {
		if (st->index == 0) {
			printf("-1 \n");
		}
		else {
			printf("Pop data : %d \n", (st->stack_list)[st->index - 1]);
			(st->index)--;
		}
	}
}
void Size(STACK* st) {
	if (st != NULL) {
		printf("Size of Stack : %d \n", st->index);
	}
}

int main() {
	STACK* stack = NULL;
	stack = CreateStack();
	printf("%d %d %d \n\n", stack->stack_list[0], stack->stack_list[999], stack->index);
	Pop(stack);
	Push(3, stack);
	Size(stack);
	

	Push(10, stack);
	Size(stack);
	

	Push(11, stack);
	Size(stack);
	Pop(stack);
	
	DeleteStack(stack);
	printf("%d %d %d", stack->stack_list[0], stack->stack_list[999], stack->index);
	return 0;
}