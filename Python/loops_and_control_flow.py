def main():
    func1(3)
    func2(5)
    func3(3)
    
# if else statements
def func1(v1):
    if v1 > 5:
        print("greater")
    elif v1 < 5:
        print("less")
    else:
        print("equals")

# for loop
def func2(v2):
    for i in range(v2):
        print(i),
    print

# while loop
def func3(v3):
    i = 0
    while i < v3:
        print(i),
        i += 1
    print

if __name__ == '__main__':
    main()