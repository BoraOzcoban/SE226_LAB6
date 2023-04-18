def sigma(n):
    global sum
    if n == 0:
        sum = 0
    else:
        sigma(n - 1)
        sum += ((-1) ** (n + 1)) / n

sum = 0
sigma(5)
print(f"Sum: {sum}")

