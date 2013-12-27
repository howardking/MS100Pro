#ifndef MS001_H_
#define MS001_H_

#include <stdio.h>
#include <malloc.h>
#define MAX_N 100       /* Max num of the elements */

int arr[MAX_N];
int n;

typedef struct BSTreeNode {
        int m_nValue; /* value of node */
        BSTreeNode *m_pLeft; /* left child of node */
        BSTreeNode *m_pRight; /* right child of node */

} BSNode, *BSNodeP;

void BobSort(void);
void BuildBSTree(BSnodeP *root);
BSNodeP Convert(BSNodeP *head);

#endif /* MS001_H_ */
