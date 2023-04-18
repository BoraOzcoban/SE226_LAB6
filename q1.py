import math

n = int(input("Please choose n: "))
x = int(input("Please choose x: "))

alt = list(map(lambda i: math.factorial(i), range(x)))

ust = list(map(lambda i: n ** i, range(x)))

bolum = list(map(lambda i: ust[i] / alt[i], range(x)))

result = sum(bolum) + 1

print(f"e^{n} = {result}")

