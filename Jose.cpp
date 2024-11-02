List JosephusProblem(int n, int m)
{
    List list = (List)malloc(sizeof(struct HeadNode));
    list->head=(Position)malloc(sizeof(struct ListNode));
    list->length = n;
    Position s;
    s = list->head;
    s->data = 1;
    //初始化循环链表

    for (int i = 2; i <= n; i++)
    {
        Position newnode = (Position)malloc(sizeof(struct ListNode));
        newnode->data = i;
        newnode->next = NULL;
        s->next = newnode;
        s = newnode;
    }
    s->next = list->head;
    s = list->head;
  
    //创立一个备用链表
    List list1 = (List)malloc(sizeof(struct HeadNode));
list1->head= (Position)malloc(sizeof(struct ListNode));
list1->head->next = NULL;
Position p = list1->head;

    //建立两个节点 用来杀人
    Position pre = NULL;
    Position cur = list->head;

    while (list->length > 0)
    {
        for (int i = 0; i < 2; i++)
        {

            pre = cur;
            cur = cur->next;
        }
        //删除并且加到新的节点
        pre->next = cur->next;
        cur->next = NULL;
        Position newnode = (Position)malloc(sizeof(struct ListNode));
        newnode->next = NULL;
        newnode->data = cur->data;
        //插入
        p->next = newnode;
        p =newnode;
        free(cur);
        cur = pre->next;
        list->length--;
    }
    return list1;
}
