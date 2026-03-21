def ft_seed_inventory(seed_type: str, quatity: int, unit: str) -> None:
    if (unit == "packets"):
        print(f"{seed_type} seeds: {quatity} packets available ")
    elif (unit == "grams"):
        print(f"{seed_type} seeds: {quatity} grams total ")
    elif (unit == "area"):
        print(f"{seed_type} seeds: covers {quatity} square meters ")
    else:
        print("Unknown unit type ")
