class Node:
    def __init__(self, data):
        self.data= data
        self.next = None

class Linklist:
    def __init__(self):
        self.head = None

    def push(self,new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def append(self,new_data):

        if self.head is None:
            self.push(new_data)
            return
        
        new_node = Node(new_data)
        temp:Node = self.head

        while(temp.next):
            temp = temp.next
        temp.next = new_node
    
    def len(self):
        temp = self.head
        count = 0
        while(temp):
            count +=1
            temp = temp.next
        return count
    
    def display(self):
        ptr = self.head
        while(ptr != None):
            print (ptr.data, end =" ")
            ptr = ptr.next
        print()

# diriver code
if __name__=="__main__":
    l = Linklist()
    l.push(10)
    l.push(20)
    l.push(30)
    l.push(40)
    l.display()
    l.append(555)
    l.display()
    