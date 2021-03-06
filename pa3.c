//
// Created by Richie on 2/27/2019.
//

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "pa3.h"


int main(int argc, char* argv[]) {
    if (argc != 4) {
        return EXIT_FAILURE;
    }
    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL) {
        return EXIT_FAILURE;
    }
    FILE *fp1 = fopen(argv[2], "w");
    if (fp1 == NULL) {
        return EXIT_FAILURE;
    }
    FILE *fp2 = fopen(argv[3], "wb");
    if(fp2 == NULL) {
        return EXIT_FAILURE;
    }
    rewind(fp);
    //Variables
    double rd = 0;
    double r = 0;
    double c = 0;

    fscanf(fp, "%le %le %le\n", &rd, &r, &c);
   // printf("%le %le %le\n",rd, r, c);
    TreeNode *tree = postTree(fp);
    prePrint(tree, fp1);
    caprCalc(tree, 0, c, rd, r);
    timeCalc(tree, 0, 0);
  //  prePrint(tree);
    delayPrintB(tree, fp2);
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    free_Tree(tree);
}





