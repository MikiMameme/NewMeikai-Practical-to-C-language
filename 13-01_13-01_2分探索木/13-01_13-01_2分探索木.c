/*2分探索木の実現例*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN 128

/*メニュー*/
typedef enum {
	Term, Insert, Search, Print
}Menu;

/*二分木のノード*/
typedef struct __bnode {
	char name[MAX_LEN];
	struct __bnode* left;
	struct __bnode* right;
}BinNode;

/*ノードの確保*/
BinNode* AllocNode(void)
{
	return calloc(1, sizeof(BinNode));
}

/*ノードの挿入*/
BinNode* InsertNode(BinNode *p, const BinNode *w)
{
	int cond;

	if (p == NULL) {
		p = AllocNode();
		strcpy(p->name, w->name);
		p->left = p->right = NULL;
	}
	else if ((cond = strcmp(w->name, p->name)) == 0)
		printf("【エラー】%sはすでに登録されています\n", w->name);
	else if (cond < 0)
		p->left = InsertNode(p->left, w);
	else
		p->right = InsertNode(p->right, w);
	return p;
}

/*ノードの探索*/
void SearchNode(BinNode* p, const BinNode* w)
{
	int cond;

	if (p == NULL)
		printf("%sは登録されていません\n", w->name);
	else if ((cond = strcmp(w->name, p->name)) == 0)
		printf("%sは登録されています\n", w->name);
	else if (cond < 0)
		SearchNode(p->left, w);
	else
		SearchNode(p->right, w);
}

/*木の全要素をキー値の昇順に表示*/
void PrintTree(const BinNode *p)
{
	if (p != NULL) {
		PrintTree(p->left);
		printf("%s\n", p->name);
		PrintTree(p->right);
	}
}

/*木の全要素を開放*/
void FreeTree(BinNode* p)
{
	if (p != NULL) {
		FreeTree(p->left);
		FreeTree(p->right);
		free(p);
	}
}

/*データの入力*/
BinNode Read(const char* message)
{
	BinNode temp;

	printf("%sする名前を入力してください :", message);
	scanf("%s", temp.name);
	return temp;
}

/*メニュー選択*/
Menu SelectMenu(void)
{
	int ch;

	do {
		printf("\n(1) 挿入  (2) 探索  (3) 表示  (0) 終了");
		scanf("%d", &ch);
	} while (ch < Term || ch > Print);
	return (Menu)ch;
}

/*メイン関数*/
int main(void)
{
	Menu menu;
	BinNode* root;

	root = NULL;
	do {
		BinNode x;
		switch (menu = SelectMenu()) {
		case Insert: x = Read("挿入");
			root = InsertNode(root, &x);
			break;
		case Search: x = Read("探索");
			SearchNode(root, &x);
			break;
		case Print: puts("--- 一覧表 ---");
			PrintTree(root);
			break;
		}
	} while (menu != Term);

	FreeTree(root);

	return 0;
}