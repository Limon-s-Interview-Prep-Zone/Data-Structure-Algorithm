class Heap:
    def __init__(self) -> None:
        self.heap = [0]

    def push(self, val: int):
        self.heap.append(val)
        i = len(self.heap) - 1

        while self.heap[i] < self.heap[i // 2]:
            temp = self.heap[i]
            p = i >> 1
            self.heap[i] = self.heap[p]
            self.heap[p] = temp
            i = p

    def min(self):
        if len(self.heap) < 2:
            return None
        return self.heap[1]

    def pop(self):
        # Dummy data
        if len(self.heap) == 1:
            return None
        # only one elemnt
        if len(self.heap) == 2:
            return self.heap.pop()
        
        # get the min value
        res = self.heap[1]
        # move last value to root
        self.heap[1] = self.heap.pop()

        i = 1
        # loop will run untill the left element is null
        while 2 * i < len(self.heap):
            # right is minimum
            # swap right
            if (
                2 * i + 1 < len(self.heap) - 1
                and self.heap[2 * i + 1] < self.heap[2 * i]
                and self.heap[i] > self.heap[2 * i + 1]
            ):
                temp = self.heap[i]
                self.heap[i] = self.heap[2 * i + 1]
                self.heap[2 * i + 1] = temp
                i = 2 * i + 1
            # left is minimum
            # swap left
            elif self.heap[i] > self.heap[2 * i]:
                temp = self.heap[i]
                self.heap[i] = self.heap[2 * i]
                self.heap[2 * i] = temp
                i = 2 * i
            else:
                break
        return res

    def display(self):
        print(self.heap)


if __name__ == "__main__":
    h = Heap()
    h.push(14)
    h.push(19)
    h.push(16)
    h.push(21)
    h.push(26)
    h.push(19)
    h.push(68)
    h.push(65)
    h.push(30)
    h.display()
    h.pop()
    h.display()


#                14
#              /   \
#             /     \
#           19       16
#          /  \     /  \
#         /    \   /    \
#       21     26 19     68
#      /  \
#     /    \
#   65     30

# TC: O(log h) because its a balace binary tree