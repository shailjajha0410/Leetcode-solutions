int calPoints(char **operations, int operationsSize) {
    int stack[1000];  
    int top = -1;

    for (int i = 0; i < operationsSize; i++) {

        if (operations[i][0] == '+') {
            stack[++top] = stack[top] + stack[top - 1];
        }
        else if (operations[i][0] == 'D') {
            stack[++top] = 2 * stack[top];
        }
        else if (operations[i][0] == 'C') {
            top--;
        }
        else {
            stack[++top] = atoi(operations[i]);
        }
    }

    int sum = 0;
    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }

    return sum;
}