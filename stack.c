// Nama: Fauzan Juniar Mulyana 
// Kelas: 1A-D4
// Prodi: D4 Teknik informatika
// Tanggal: 20 Mar 2025
// Nama File: stack.c
#include "stack.h"
#include "list.h"

Stack createStack() {
    return createList();
}

void push(Stack *S, int data) {
    insertFirst(S, data);
}

int pop(Stack *S) {
    return removeFirst(S);
}

int stackIsEmpty(Stack S) {
    return isEmpty(S);
}

void deleteStack(Stack *S) {
    deleteList(S);
}
