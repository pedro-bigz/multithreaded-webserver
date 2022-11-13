#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list_def.h"


/**
 * Create pointer for list (ArrayList)
 * @return ArrayList
 */
ArrayList arrayInit();

/**
 * Create pointer for list (ArrayList)
 * @return ArrayList
 */
void arrayPush(ArrayList l, void ** o);

/**
 * Remove first index of ArrayList
 * And return the content
 * @return void **
 */
void ** arrayShift(ArrayList l);

/**
 * Remove last element of ArrayList
 * And return the content
 * @return void **
 */
void ** arrayPop(ArrayList l);

/**
 * Set nth index in array and replace content
 */
void arraySet(ArrayList l, int n, void ** o);

/**
 * Change two index content in ArrayList
 */
void arrayExchange(ArrayList l, int posA, int posB);

/**
 * Get nth element content in ArrayList
 * @return void **
 */
void ** arrayItem(ArrayList l, int n);

/**
 * Find element in ArrayList
 * Returns true if the element exists in Array
 * Otherwise returns false
 * @return bool
 */
bool arrayContain(ArrayList l, void ** needle, int (*compar)(const void ** a, const void ** b));

/**
 * Find element in ArrayList
 * @return void **
 */
Node * arrayFind(ArrayList l, void ** needle, int (* compar)(const void ** a, const void ** b));

/**
 * Sort the ArrayList using QuickSort
 */
void arraySort(ArrayList l, int (*compar)(const void *, const void *));

/**
 * Find element in ArrayList
 * Returns index if the element exists in Array
 * And -1 if it's not
 * @return int
 */
int arrayIndex(ArrayList l, void ** needle, int (* compar)(const void ** a, const void ** b));

/**
 * Remove the nth element from ArrayList
 * @return bool
 */
bool arrayRemove(ArrayList l, int n);

/**
 * Get Node of nth element in ArrayList
 * @return Node *
 */
Node * arrayNodeByIndex(ArrayList l, int n);

/**
 * Get Node of the first element 
 * Which compar return true
 * @return Node *
 */
Node * arrayNode(ArrayList l, void ** o, int (* compar)(const void ** a, const void ** b));

/**
 * Create new ArrayList with the elements
 * which callback returns
 * @return ArrayList
 */
ArrayList arrayMap(ArrayList l, void ** (* callback)(const void **, const int, const ArrayList l));

/**
 * Create new ArrayList with the elements
 * which callback returns true
 * @return ArrayList
 */
ArrayList arrayFilter(ArrayList l, int (* callback)(const void **, const int, const ArrayList l));

/**
 * Accumulate ArrayList content
 * @return void **
 */
void ** arrayReduce(ArrayList l, void ** (* callback)(void ** accum, const void **, const int, const ArrayList l), void ** init);

#endif // LISTA_H_INCLUDED
