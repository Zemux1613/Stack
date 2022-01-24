#include "Main.h"

int stackCounter = 0;

// direkt alles mit 0 inizialisieren
float stack[ArraySize] = { 0.0f };

void Inizialise() {

    stackCounter = 0;

    for (int i = 0; i < ArraySize; i++) {
        stack[i] = 0.0f;
    }

}

void push(float value) 
{
    // If the stack is not the maximum size, it can be added to the stack.
    if (stackCounter < ArraySize) {

        stack[stackCounter] = value;

        stackCounter++;
    
    }

}

float pop() {

    --stackCounter;

    float lastValue = stack[stackCounter];

    return lastValue;
}

int main() {

    // Inizialise values at the stack
    Inizialise();

    // push 2.2 on the stack
    push(2.2);

    // push 1.2 on the stack
    push(1.2);

    // remove the last element and get the value of last element of the stack
    float pop1 = pop();

    return 0;
}