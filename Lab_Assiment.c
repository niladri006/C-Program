#include <stdio.h>
#include <malloc.h>
struct node
{
        int data;
        struct node *next;
};
struct node *nw, *head = NULL, *p, *q, *m;
void ins_beg(int val)
{
        nw = (struct node *)malloc(sizeof(struct node));
        nw->data = val;
        nw->next = NULL;
        if (head == NULL)
                head = nw;
        else
        {
                nw->next = head;
                head = nw;
        }
}
void display()
{
        p = head;
        if (p == NULL)
                printf("Nothing to display\n");
        else
                while (p != NULL)
                {
                        printf("%d-->", p->data);
                        p = p->next;
                }
}

void ins_end(int x)
{

        q = head;
        nw = (struct node *)malloc(sizeof(struct node));
        nw->data = x;
        nw->next = NULL;
        if (q == NULL)
                head = nw;
        else
        {
                while (q->next != NULL)
                        q = q->next;
                q->next = nw;
        }
}
void ins_pos(int pos, int x)
{
        int c = 0;
        q = head;
        nw = (struct node *)malloc(sizeof(struct node));
        nw->data = x;
        nw->next = NULL;
        if (q == NULL)
                q = nw;
        else
        {
                while (q != NULL && c < pos - 1)
                {
                        m = q;
                        q = q->next;
                        c++;
                }
                m->next = nw;
                nw->next = q;
        }
}
int del_beg()
{

        int x;
        p = head;
        if (p == NULL)
        {
                printf("\nThe list is empty");
                return 0;
        }
        else
        {
                x = p->data;
                head = p->next;
                free(p);
        }
        return (x);
}
int del_end()
{

        int x;
        p = head;
        if (p == NULL)
        {
                printf("\nThe list is empty");
                return 0;
        }
        else
        {
                while (p->next != NULL)
                {
                        q = p;
                        p = p->next;
                }
                x = p->data;
                q->next = NULL;
                free(p);
        }
        return (x);
}
int del_pos(int key)
{
        int x = 0, c = 0;
        p = head;
        if (p == NULL)
        {
                printf("The list is empty");
                return 0;
        }
        else
        {
                while (p->next != NULL && c < key - 1)
                {
                        q = p;
                        p = p->next;
                        c++;
                }
                q->next = p->next;

                x = p->data;

                free(p);
        }

        return (x);
}
main()
{
        int ch, d, pos;
        while (1)
        {
                printf("\nEnter \n1.insert\n2.display \n3. Exit\n4.insert end\n5.insert pos\n6.del_beg\n7.del_end\n8.del pos\n");
                scanf("%d", &ch);
                switch (ch)
                {
                case 1:
                        printf("Enter the data=");
                        scanf("%d", &d);
                        ins_beg(d);
                        break;
                case 2:
                        display();
                        break;
                case 3:
                        break;
                case 4:
                        printf("Enter the data=");
                        scanf("%d", &d);
                        ins_end(d);
                        break;
                case 5:
                        printf("Enter the data and pos");
                        scanf("%d%d", &d, &pos);
                        ins_pos(d, pos);
                        break;
                case 6:
                        printf("the deleted data=%d\n", del_beg());
                        break;
                case 7:
                        printf("the deleted data=%d\n", del_end());
                        break;
                case 8:
                        printf("Enter the pos");
                        scanf("%d", &pos);
                        printf("the deleted data=%d\n", del_pos(pos));
                        break;
                default:
                        printf("Wrong choice");
                }
        }
}
