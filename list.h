// Nama: Fauzan Juniar Mulyana 
// Kelas: 1A-D4
// Prodi: D4 Teknik informatika
// Tanggal: 20 Mar 2025
// Nama File: list.h
#ifndef LIST_H
#define LIST_H

typedef struct tElmtList *address;
typedef struct tElmtList {
    int data;
    address next;
} ElmtList;

typedef struct {
    address First;
} List;

List createList();
void deleteList(List *L);
int isEmpty(List L);
void insertFirst(List *L, int data);
int removeFirst(List *L);

/* Aksesor */
#define data(P) (P)->data
#define next(P) (P)->next
#define first(L) (L).First

#endif
