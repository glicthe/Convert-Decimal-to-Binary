// Nama: Fauzan Juniar Mulyana 
// Kelas: 1A-D4
// Prodi: D4 Teknik informatika
// Tanggal: 20 Mar 2025
// Nama File: list.c
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List createList() {
    List L;
    first(L) = NULL;
    return L;
}

void deleteList(List *L) {
    address P = first(*L);
    while(P != NULL) {
        address temp = P;
        P = next(P);
        free(temp);
    }
    first(*L) = NULL;
}

int isEmpty(List L) {
    return (first(L) == NULL);
}

void insertFirst(List *L, int data) {
    address newNode = (address)malloc(sizeof(ElmtList));
    if (newNode == NULL) {
        printf("Alokasi memori gagal!\n");
        return;
    }
    newNode->data = data;
    newNode->next = first(*L);
    first(*L) = newNode;
}

int removeFirst(List *L) {
    if (isEmpty(*L)) {
        printf("List kosong, tidak dapat menghapus\n");
        return -1;
    }
    address temp = first(*L);
    int data = temp->data;
    first(*L) = temp->next;
    free(temp);
    return data;
}
