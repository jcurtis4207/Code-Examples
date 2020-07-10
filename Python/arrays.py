def main():
    # create list
    arr = ['a','b','c','d']
    print_list(arr)
    print(arr) # prints as entered with brackets and commas

    # add element
    arr.append('e')
    arr = arr + ['f','g']
    print_list(arr)

    # create numbered list from range
    arr1 = range(5)
    arr2 = range(8,12)
    arr3 = range(2,9,2) # third number is increment size
    print_list(arr1)
    print_list(arr2)
    print_list(arr3)

    # length
    # must cast int to string to concatenate
    print("Array Length: "+str(len(arr)))

    # indexing
    print("First Element: "+arr[0])
    print("Last Element: "+arr[-1])

    # sublists - [m:n] -> m to n-1
    print_list(arr[0:3]) #0-2
    print_list(arr[4:]) #4-end
    print_list(arr[:2]) #start-1
    print_list(arr[-3:]) #last 3

    # methods
    print(arr.count('a')) # counts occurences of 'a'
    print_list(sorted(arr))

    # list comprehension - create sublist based on criteria
    # first 'i' is new element based on 'if' condition
    sub = [i for i in arr if i > 'd']
    print_list(sub)

def print_list(list):
    for i in list:
        print(i),
    print

    # OR
    # for i in range(len(list)):
    #     print(arr[i])

if __name__ == '__main__':
    main()