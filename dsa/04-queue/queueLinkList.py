class ListNode:
    def __init__(self, data: int) -> None:
        self.data = data
        self.next = None


class Queue:
    def __init__(self) -> None:
        self.front = self.rear = None

    def enQueue(self, data: int):
        newNode = ListNode(data)

        # rear not None
        if self.rear:
            self.rear.next = newNode
            self.rear = None # self.rear = self.rear.next

        else:
            self.front = self.rear = newNode

    def deQueue(self):
        if self.front is None:
            return None
        else:
            val=self.front.data
            self.front=self.front.next
            return val
    def traverse(self):
        curr=self.front
        while curr:
            print(curr.data, ' -> ', end ="")
            curr = curr.next

if __name__=='__main__':
    q=Queue()
    q.enQueue(12)
    q.enQueue(10)
    print(q.deQueue())
    q.traverse()