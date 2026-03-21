def ft_count_harvest_recursive(i, days):
    if i > days:
        print("Harvest time! ")
        return
    print(f"Days {i}")
    ft_count_harvest_recursive(i + 1, days)


def input_days():
    days = int(input("Days until harvest: "))
    return (days)


days = input_days()
