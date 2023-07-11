#!/usr/bin/python3
for number1 in range(0, 10):
    for number2 in range(1, 10):
        if number1 >= number2:
            continue
        elif number1 == 8 and number2 == 9:
            print("{}{}".format(number1, number2))
        else:
            print("{}{}, ".format(number1, number2), end="")
