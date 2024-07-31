def check_adjacent_elements(lst):
    for i in range(len(lst) - 1):
        if lst[i] == lst[i + 1]:
            print(f"要素 {i} と {i+1} は一致しています: {lst[i]}")
        else:
            print(f"要素 {i} と {i+1} は一致していません: {lst[i]} != {lst[i+1]}")

# 使用例
my_list = [1, 2, 2, 3, 4, 4, 5]
check_adjacent_elements(my_list)
