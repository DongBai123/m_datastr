void K_Reverse(List list, int k)
{
    Position p0 = list->head;
    Position pre = NULL;
    Position cur = list->head->next;
    int length = list->length;

    for (; length >= k; length -= k)
    {
        for (int i = 0; i < k; i++)
        {
            Position temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }

        Position nxt = p0->next;
        p0->next->next = cur;
        p0->next = pre;
        p0 = nxt;

    }


    
}
