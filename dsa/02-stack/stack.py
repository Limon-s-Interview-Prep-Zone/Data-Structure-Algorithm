from sys import maxsize


def create_stack():
    stack = []
    return stack


def is_empty(stack):
    return len(stack) == 0


def push(stack, item):
    stack.append(item)


def pop(stack):
    if is_empty(stack):
        return str(-maxsize - 1)  # return minus infinite

    return stack.pop()


def peek(stack):
    if is_empty(stack):
        return str(-maxsize - 1)  # return minus infinite
    return stack[len(stack) - 1]


# Driver program to test above functions
stack = create_stack()
push(stack, str(10))
push(stack, str(20))
push(stack, str(30))
print(pop(stack) + " popped from stack")
print("stack after popping an element: " + str(stack))
