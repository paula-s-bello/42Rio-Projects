class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self.height = height
        self.age = age

    def grow(self) -> None:
        self.height += 1

    def age_up(self) -> None:
        self.age += 1

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.age} days old")


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int, color: str) -> None:
        super().__init__(name, height, age)
        self.color = color

    def bloom(self) -> None:
        print(f"{self.name} is blooming in {self.color} color!")

    def show(self) -> None:
        super().show()
        print(f"Color: {self.color}")


class Tree(Plant):
    def __init__(self, name: str, height: float, age: int, trunk_diameter: float) -> None:
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter

    def produce_shade(self) -> None:
        print(f"{self.name} is producing shade.")

    def show(self) -> None:
        super().show()
        print(f"Trunk diameter: {self.trunk_diameter}cm")


class Vegetable(Plant):
    def __init__(self, name: str, height: float, age: int, season: str) -> None:
        super().__init__(name, height, age)
        self.season = season
        self.nutritional_value = 0

    def grow(self) -> None:
        super().grow()
        self.nutritional_value += 2

    def age_up(self) -> None:
        super().age_up()
        self.nutritional_value += 1

    def show(self) -> None:
        super().show()
        print(f"Season: {self.season}")
        print(f"Nutritional value: {self.nutritional_value}")


def main() -> None:
    flower = Flower("Rose", 20.0, 10, "Red")
    tree = Tree("Oak", 150.0, 200, 30.0)
    vegetable = Vegetable("Carrot", 10.0, 5, "Winter")

    flower.bloom()

    vegetable.grow()
    vegetable.age_up()

    print("\n=== Plants ===")
    flower.show()
    print()
    tree.show()
    print()
    vegetable.show()


if __name__ == "__main__":
    main()