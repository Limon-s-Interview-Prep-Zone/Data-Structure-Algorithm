from typing import List


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None


class Linklist:
    def __init__(self):
        self.head = None
        self.tail = None

    def convertArrayToDLL(self, arr: List):
        self.head = Node(arr[0])
        curr = self.head
        for i in arr[1:]:
            newNode = Node(i)
            newNode.prev = curr
            newNode.next = None
            curr.next = newNode
            curr = newNode

    def traverse(self):
        ptr = self.head
        while ptr != None:
            print(ptr.data, end=" ")
            ptr = ptr.next
        print()

    def removeAtFirst(self):
        if self.head is None:
            return
        if self.head.next is None:
            return

        self.head.prev = None
        self.head = self.head.next

    def removeAtLast(self):
        if self.head is None:
            return
        last = self.head
        while last.next:
            last = last.next

        last.prev.next = None

    def removeAtKPosition(self, k: int):
        if self.head is None:
            return
        curr = self.head
        count = 0
        while curr:
            count += 1
            if count == k:
                prev = curr.prev
                next = curr.next
                if prev is None and next is None:
                    return
                elif prev is None:
                    self.removeAtFirst()
                elif next is None:
                    self.removeAtLast()
                prev.next = next
                next.prev = prev
                curr.prev = None
                curr.next = None
                break
            curr = curr.next

    def insertAtFirst(self, val: int):
        curr = self.head
        newNode = Node(val)
        newNode.next = curr
        curr.prev = newNode
        self.head = newNode

    def insertAtLast(self, val: int):
        curr = self.head
        while curr.next:
            curr = curr.next
        newNode = Node(val)
        newNode.prev = curr
        curr.next = newNode

    def insertBeforeLast(self, val: int):
        curr = self.head
        while curr.next.next:
            curr = curr.next
        newNode = Node(val)
        newNode.prev = curr
        newNode.next = curr.next
        curr.next = newNode

    def insertBeforeKPosition(self, k: int, val: int):
        curr = self.head
        count = 0
        while curr:
            count += 1
            if(count==k):
                newNode = Node(val)
                newNode.prev = curr.prev
                newNode.next = curr

                curr.prev.next = newNode
                curr.prev=newNode

            curr = curr.next
        

# diriver code
if __name__ == "__main__":
    ll = Linklist()
    ll.convertArrayToDLL([2, 3, 4, 5])
    # ll.removeAtFirst()
    # ll.removeAtLast()
    # ll.removeAtKPosition(5)
    # ll.insertAtFirst(12)
    # ll.insertAtLast(120)
    # ll.insertBeforeLast(99)
    ll.insertBeforeKPosition(3,99)
    ll.traverse()
