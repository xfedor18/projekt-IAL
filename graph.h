/*
 * Předmět: Algoritmy (IAL) - FIT VUT v Brně
 * Hlavičkový soubor pro graph.c
 * Vytvořili: Oleksii Fedorchenko, Dmitrii Ivanuhskin, Zlata Valakhanovich, prosinec 2022
 */

#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define STR_MAX 50

typedef struct Edge {
    int data;
} TEdge;

typedef struct Graph {
    int V;      /*contains all nodes */
    TEdge **array; /*contains two dimensional arrays which interpretating the whole matrix*/
} TGraph;

typedef struct Path {
    int V;
    TEdge *array;
} TPath;

void handleErrs (int code, char *string);
void readFile (int argc, char *argv[]);

void initGraph (TGraph *graph, int V);
void initPath (TPath *graph, int V);
void freeGrap(TGraph *graph, int V);
void freePath(TPath *path);
void insertConn (TGraph *graph, int v, int e);
void printGraph (TGraph *graph, int V, int cnt);
bool algo (TGraph *graph, TPath *path, int curr_node, int V);
bool cycle (TGraph *graph, TPath *path, int V);

#endif
