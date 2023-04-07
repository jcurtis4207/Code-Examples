def main():
    v1,v2 = func1()
    print(v1)
    print(v2)

    print(func2(4,5,6))

# function that returns multiple values
def func1():
    return 5,6

# function with undetermined number of parameters
def func2(*vars):
    sum = 0
    for i in vars:
        sum = sum + i
    return sum

if __name__ == '__main__':
    main()
