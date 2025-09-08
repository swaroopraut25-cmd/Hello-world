lim = int(input("Enter the limit of series:"))
print("Limit of Fibonacci Series:" , lim)
first_num = 0
second_num = 1
print(first_num, ", " , second_num)
for i in range(2, lim):
    next_num = first_num + second_num
    print("," , next_num)
    first_num = second_num
    second_num = next_num
