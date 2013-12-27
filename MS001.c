/*
 * File	  : MS001.c
 * Author : HowardKing
 * Time   : 2013-12-27
 * Version: V1.0
 */

#include "MS001.h"

void BobSort(void)
{ /* 冒泡排序 */
	int i,j;   /* 冒泡排序所用到的计数变量 */
	int temp;  /* 引入第三个变量来做两个值的交换 */
	int flag;  /* 用来标志所要排序的数组是否已经有序 */
	
	for (i=0; i<n; i++){
		flag = 0;
		for (j=i; j<n; j++){
			if (arr[i] > arr[j]){
				temp = arr[i];   /* 数值交换 */
				arr[i] = arr[j];
				arr[j] = temp;
				flag = 1;         /* 设置交换标志位 */
			}
		}
		if (0 == flag) {    /* 若flag的值没有改变，则表示已经有序*/
			break;  
		}
	}
}

void BuildBSTree(BSNodeP *root)
{
	int i=0;
	if (NULL == root){
		root = (BSnodeP)malloc(BSnode);
		root->m_mValue = arr[n/2];
	}
	
	BSNodeP temp = root;

	while (NULL!=temp->m_pLeft && NULL!=temp->m_pRight){
		if (arr[i] < temp->m_nValue){
			
		}
	}
}

int convert(BSNodeP *head)
{

}

int main(void)
{
		
	int i = 0;
	BSNodeP root = NULL;
	BSNodeP head = NULL;
	printf("请输入数字n的大小：\n>>");
	scanf ("%d", &n);
	printf("请输入 %d 个数字\n");
	
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}

	BobSort();
	BuildBSTree(root);
	head = Covert(root);

	return 0;
}
