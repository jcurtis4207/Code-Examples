def main():
    # keys can be strings or ints
    # values can be strings, ints, lists, or dictionaries
    dict1 = {'x':3,'y':5,'z':7}

    # add pair(s)
    dict1['w'] = 2
    dict1.update({'v':1,'u':9})

    # overwrite value
    dict1['w'] = 6

    # combine 2 lists in dictionary
    arr1 = ['a','b','c','d']
    arr2 = [1,2,3,4]
    dict2 = {i:j for i,j in zip(arr1,arr2)}

    # create list of keys
    keys_list = list(dict1)

    # store all key:value pairs as dict_list tuples
    tuple_list = dict1.items()

    # print all keys
    for i in dict1:
        print(i),
    print

    # print all values
    for i in dict1:
        print(dict1[i]),
    print

    # print all pairs
    for i in dict1:
        print('{}:{}'.format(i, dict1[i])),
    print

if __name__ == '__main__':
    main()