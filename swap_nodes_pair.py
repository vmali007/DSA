def swapPairs(head: Optional[ListNode]) -> Optional[ListNode]:
        if (head == None or head.next == None):
            return head

        ptr1 = head
        ptr2 = head.next

        while(ptr2 != None):
            ptr1.val,ptr2.val = ptr2.val,ptr1.val

            ptr1 = ptr1.next.next
            if ptr2.next == None:
                break
            ptr2 = ptr2.next.next

        return head