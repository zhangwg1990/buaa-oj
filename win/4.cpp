#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int pos;
	struct node *next;
	struct node *pre;
}node;

void dele(node *p, node **q)
{
	if (p == *q) {
		*q = (*q)->next;
		(*q)->pre = NULL;
		free(p);
	} else if (p->next == NULL) {
		p->pre->next = NULL;
		free(p);
	} else {
		p->pre->next = p->next;
		p->next->pre = p->pre;
		free(p);
	}
}
int main()
{
	node *p, *last, *q;
	int i, dir, flag;
	int n, m;

	while (EOF != scanf("%d %d", &n, &m)) {
		last = NULL;
		for (i = 0; i < n; i++) {
			p = (node *)malloc(sizeof(node));
			p->pos = (i + 1);
			p->pre = last;
			if (0 != i)
				last->next = p;
			else 
				q = p;
			if ((n-1) == i) p->next = NULL;
			last = p;
		}
		dir = 1;
		p = q;
		flag = 1;
		while (NULL != q->next) {
			
			if ((NULL == p->next) && (1 == dir)) 
				dir = -1;
			if ((p == q) && (-1 == dir)) 
				dir = 1;
			if ((1 == dir) && (flag == m)) {
				p = p->next;
				dele(p->pre, &q);
				flag = 1;
			} else if ((-1 == dir) && (flag == m)) {
				p = p->pre;
				dele(p->next, &q);
				flag = 1;
			} else if (1 == dir) {
				p = p->next;
				flag++;
			} else {
				p = p->pre;
				flag++;
			}
		}
		printf("%d\n", q->pos);
	}
	system("pause");
	return 0;
}