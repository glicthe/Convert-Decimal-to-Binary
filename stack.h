// Nama: Fauzan Juniar Mulyana 
// Kelas: 1A-D4
// Prodi: D4 Teknik informatika
// Tanggal: 20 Mar 2025
// Nama File: stack.h
#ifndef STACK_H
#define STACK_H
#include "list.h"

typedef List Stack;

Stack createStack();
void push(Stack *S, int data);
int pop(Stack *S);
int stackIsEmpty(Stack S);
void deleteStack(Stack *S);

#endif
