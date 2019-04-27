#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include <iostream>
#include "child.h"
#include "parent.h"

#define nextR(P) P->nextR
#define prevR(P) P->prevR
#define firstR(L) L.firstR
#define lastR(L) L.lastR
#define child(P) P->child
#define parent(P) P->parent
#define infoR(P) P->infoR

using namespace std;

typedef struct elmlistrelation *addressrelation;

struct elmlistrelation{
    addressrelation nextR;
    addressrelation prevR;
    addressparent parent;
    addresschild child;
};

struct listrelation{
    addressrelation firstR;
    addressrelation lastR;
};

inline void createlist_relation(listrelation &L);
inline void insertfirst_relation(listrelation &L,addressrelation P);
inline void insertlast_relation(listrelation &L,addressrelation P);
inline void insertafter_relation(listrelation &L,addressrelation P , addressrelation prec);
inline void deletefirst_relation(listrelation &L,addressrelation &P);
inline void deletelast_relation(listrelation &L,addressrelation &P);
inline void deleteafter_relation(listrelation &L,addressrelation &P, addressrelation prec);
inline void printinfo_relation(listrelation L);
inline void delete_relation(listrelation &LR,listchild LC ,listparent LP ,infotypechild CC,infotypeparent PP,addressrelation &RR);
addressrelation searchnim_relation(listrelation L,addressparent P,addresschild C);



#endif // RELASI_H_INCLUDED
