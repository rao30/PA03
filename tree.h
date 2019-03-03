//
// Created by Richie on 2/28/2019.
//

#ifndef UNTITLED_TREE_H
#define UNTITLED_TREE_H

#endif //UNTITLED_TREE_H
typedef struct _TreeNode {
    int label;
    double t;
    double c;
    double ctot;
    double rpath;
    double lw;
    double rw;
    struct _TreeNode *left;
    struct _TreeNode *right;
    struct _TreeNode *next;
} TreeNode;

TreeNode *create_node(double lw, double rw, TreeNode *left, TreeNode *right);

TreeNode *create_leaf(int label, double capacitance);

TreeNode *postTree(FILE *fp);

void prePrint(TreeNode *tn, FILE *fp);

void delayPrint(TreeNode *tn, FILE *fp);

void delayPrintB(TreeNode *tn, FILE *fp);

void caprCalc(TreeNode *tn, double cap, double c, double rpath, double r);

void timeCalc(TreeNode *tn, double prevr, double prevrc);

void free_Tree(TreeNode *tn);
