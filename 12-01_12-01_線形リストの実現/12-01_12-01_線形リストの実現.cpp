/*線形リストの実現例*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*メニュー*/
typedef enum {
	Term, Insert, Append, Delete, Print, Clear
}Menu;

/*ノード*/
typedef struct __node {
	int no;
	char name[10];
	struct __node* next;
}Node;

/*各メンバに値を設定*/
void SetNode(Node *x, int no, const char *name, Node *next)
{
	x->no = no;
	x->next = next;
	strcpy(x->name, name);
}

/*ノードを確保*/
Node *AllocNode(void)
{
	return (Node*)calloc(1, sizeof(Node));
}

/*ノードを挿入*/
void InsertNode(Node **top, int no, const char *name)
{
	Node* ptr = *top;
	*top = AllocNode();
	SetNode(*top, no, name, ptr);
}

/*ノードを追加*/
void AppendNode(Node **top, int no, const char *name)
{
	if (*top == NULL)
		InsertNode(top, no, name);
	else {
		Node* ptr = *top;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = AllocNode();
		SetNode(ptr->next, no, name, NULL);
	}
}

/*ノードの削除*/
void DeleteNode(Node **top)
{
	if (*top != NULL) {
		Node* ptr = (*top)->next;
		free(*top);
		*top = ptr;
	}
}

/*すべてのノードを削除*/
void ClearList(Node **top)
{
	while (*top != NULL)
		DeleteNode(top);
}

/*すべてのノードを表示*/
void PrintList(const Node *top)
{
	const Node *ptr = *top;

	puts("【一覧表】");
	while (ptr != NULL) {
		printf("%5d %-10.10s\n", ptr->no, ptr->name);
		ptr = ptr->next;
	}
}

/*線形リストの初期化*/
void InitList(Node **top)
{
	*top = NULL;
}

/*線形リストの後始末*/
void TermList(Node **top)
{
	ClearList(top);
}

/*データの入力*/
Node Read(const char *message)
{
	Node temp;

	printf("%sするデータを入力してください\n", message);
	printf("番号 :"); scanf("%d", &temp.no);
	printf("名前 :"); scanf("%s", temp.name);

	return temp;
}

/*メニュー選択*/
Menu SelectMenu(void)
{
	int ch;

	do {
		printf("\n（１）先頭にノードを挿入 （２）末尾にノードを追加\n");
		printf("（３）先頭のノードを削除 （４）全ノードを表示\n");
		printf("（５）全ノードを削除 （０）処 理 終 了 :");
		scanf("%d", &ch);
	} while (ch < Term || ch > Clear);
	return (Menu)ch;
}

/*メイン*/
int main(void)
{
	Menu menu;
	Node *list;

	InitList(&list);

	do {
		Node x;
		switch (menu = SelectMenu()) {
		
		case Insert: x = Read("先頭に挿入");
			InsertNode(&list, x.no, x.name);
			break;

		case Append: x = Read("末尾に追加");
			AppendNode(&list, x.no, x.name);
			break;

		case Delete: DeleteNode(&list);
			break;

		case Print: PrintList(list);
			break;

		case Clear: ClearList(&list);
			break;
		}
	} while (menu != Term);

	TermList(&list);

	return 0;
}