UPPER_BOUND = 4000000


def is_even(n):
    return n % 2 == 0


sum = 0
prev = 0
next = 1

for i in range(2, UPPER_BOUND):
    fib = prev + next

    if fib >= UPPER_BOUND:
        break

    prev = next
    next = fib

    if is_even(fib):
        sum += fib

print(f"The sum of even fibonacci number up to {UPPER_BOUND} is {sum}")
