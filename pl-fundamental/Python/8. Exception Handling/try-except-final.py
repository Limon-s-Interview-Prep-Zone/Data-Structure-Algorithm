try:
    print("something error")
except:
    print("Something went wrong when writing to the file")
finally:
    print("Final block")

try:
    print("something error")
except:
    print("Something went wrong when writing to the file")
else:
    print("Final block")
a = -1
if (a < 0):
    raise Exception("Number can not less than 0")
