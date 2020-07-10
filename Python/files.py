def main():
    # read in entire file to string
    with open('text.txt') as new_file:
        new_text = new_file.read()
    print(new_text)

    # read in line by line
    arr = []
    with open('text.txt') as new_file:
        for i in new_file.readlines():
            arr.append(i)
        print(arr)

    # read in single line
    with open('text.txt') as new_file:
        new_line = new_file.readline()
    print(new_line)

    # append text to file
    with open('text.txt','a') as new_file:
        new_file.write("More shit")

    # overwrite a file
    with open('text.txt','w') as new_file:
        new_file.write("Replace all the shit")

if __name__ == '__main__':
    main()