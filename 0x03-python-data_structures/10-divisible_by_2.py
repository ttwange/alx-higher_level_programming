ble File  7 lines (7 sloc)  194 Bytes
#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    new_list = []
    if my_list:
        for elm in my_list:
            new_list.append(True if elm % 2 == 0 else False)
    return new_list 
