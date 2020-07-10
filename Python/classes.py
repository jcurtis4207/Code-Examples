class thing:
    value = 0
    name = ""
    # constructor - ALL functions must have 'self' parameter
    def __init__(self, x, y):
        self.value = x
        self.name = y
    # to String
    def __repr__(self):
        return '{}:{}'.format(self.name,self.value)
    # class function
    def increment_value(self):
        self.value += 1

def main():
    # create object
    thing1 = thing(5,'Bob')

    # call toString
    print(thing1)

    # access field
    print(thing1.value)

    # call function
    thing1.increment_value()
    print(thing1.value)

    # create instance variable - not stored in class
    thing1.width = 20
    print(thing1.width)

    # see if attribute is defined for given object
    print(hasattr(thing1,'value'))
    print(hasattr(thing1,'height'))
    
    # return attribute, or default value if doesn't exist
    print(getattr(thing1,'value',78))
    print(getattr(thing1,'height',78))

if __name__ == '__main__':
    main()