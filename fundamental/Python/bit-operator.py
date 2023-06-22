a = 12 # 1100
b = 10 # 1010

print("a&b = ", a&b) # 1000 = 8
print("a|b = ", a|b) # 1110 = 14
print("a^b = ", a^b) # 0110 = 6
print("~a = ", ~a) # 0011 = 3 -> 1100+1 -> -13
print("~b = ", ~b) # 0101 then add 2's complement add 1 so = 1010 +1 =1011 =-11
print("b<<1", b<<2) # 101000 =20
print("b<<1", b>>2) # 1010 -> 0010 -> 2
