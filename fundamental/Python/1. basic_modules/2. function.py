# function
def tri_recursion(k):
    if (k > 0):
        result = k + tri_recursion(k - 1)
        print(result)
    else:
        result = 0
    return result


print("\n\nRecursion Example Results")
tri_recursion(5)


def my_func(n):
    if (n == 1):
        return 1
    else:
        return 1 + my_func(n - 1)


print("th number is", my_func(3))


def lamdaFunc(n):
    return lambda a: a * n


doubler = lamdaFunc(3)
print(doubler(12))