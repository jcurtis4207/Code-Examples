def main():
    var = "Hello"

    # formatting - using variables inside {} can specify order
    var4 = 5
    var5 = 6
    print("Hello {} {}".format(var4,var5))
    print("Hello {x} {y}".format(y=var4,x=var5))

    # charAt
    print(var[1])

    # substring [m:n] - m to n-1
    print(var[1:4])

    # length - must cast int to string
    print("Length: {}".format(len(var)))

    # contains - 'piece' in 'whole'
    print('ll' in var)

    # cases
    print(var.lower())
    print(var.upper())
    print(var.title())

    # split - default delimiter is space
    var1 = "Bill.Frank.John"
    arr1 = var1.split('.')
    print(arr1)

    # join - join list into string with given delimiter
    arr2 = ['Jill', 'David', 'Jim']
    var2 = ' '.join(arr2) # delimiter is space
    print(var2)

    # find and replace
    var3 = '00110101'
    print(var3.replace('0','3')) # replace 0 with 3
    print("First index of 1 is: {}".format(var3.find('1'))) # find first index of 1

if __name__ == '__main__':
    main()
