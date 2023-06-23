class CircularQueue():

    def __init__(self, size):
        self.size = size
        self.queue = [None] * size
        self.front = self.rear = -1

    def is_full(self):
        if (self.rear+1) % self.size == self.front:
            return True
        return False
    
    def is_empty(self):
        return True if self.rear==-1  else False
    
    # Insert an element into the circular queue
    def enqueue(self, data):

        if(self.is_full()):
            print("queue is full")
            return
        if (self.front == -1):
            self.front,self.rear = 0
            self.queue[self.rear] = data
        else:
            self.rear = (self.rear + 1) % self.size
            self.queue[self.rear] = data

    # Delete an element from the circular queue
    def dequeue(self):
        if (self.is_empty()):
            print("The circular queue is empty\n")
            return

        if (self.rear == self.front):
            temp = self.queue[self.front]
            self.front,self.rear = -1
            return temp
        else:
            temp = self.queue[self.front]
            self.front = (self.front + 1) % self.size
            return temp

    def printCQueue(self):
        if(self.is_empty()):
            print("No element in the circular queue")
            return

        if (self.rear >= self.front):
            for i in range(self.front, self.rear + 1):
                print(self.queue[i], end=" ")
            print()
        else:
            for i in range(self.front, self.size):
                print(self.queue[i], end=" ")
            for i in range(0, self.rear + 1):
                print(self.rear[i], end=" ")
            print()

if __name__=="__main__":
    q = CircularQueue(5)
    q.enqueue(1)
    q.enqueue(2)
    q.enqueue(3)
    q.enqueue(4)
    q.enqueue(5)
    q.printCQueue()

    q.dequeue()
    print("After removing an element from the queue")
    q.printCQueue()
