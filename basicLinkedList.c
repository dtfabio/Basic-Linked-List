/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 /*
  * File:   basicLinkedList.c
  * Author: dtfabio96
  *
  * Created on 10 october 2015, 14.09
  */
#include <stdio.h>
#include <stdlib.h>

typedef struct _nodo{
    int data;
    struct _nodo *next;
} nodo;

int main(int argc, char** argv) {
    nodo *testa = malloc(sizeof(nodo));
    for(int i=0;i<10;i++){
      nodo *n = malloc(sizeof(nodo));
      n->data = i;
      n->next = testa;
      testa = n;
    }
    nodo *temp = testa;
    for(int i=0;i<10;i++){
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return (EXIT_SUCCESS);
}
