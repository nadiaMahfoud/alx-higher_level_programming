#!/usr/bin/python3

def search_replace(my_list, search, replace):
    # Create a new list with the replaced elements
    new_list = [replace if num == search else num for num in my_list]
    return new_list

