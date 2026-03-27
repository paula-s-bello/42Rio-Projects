class Plant:
    class _Stats:
        def __init__(self) -> None:
            self._grow_calls = 0
            self._age_calls = 0
            self._show_calls = 0

        def add_grow(self) -> None:
            self._grow_calls += 1

        def add_age(self) -> None:
            self._age_calls += 1

        def add_show(self) -> None:
            self._show_calls += 1

        def display(self) -> None:
            print(f"grow() calls: {self._grow_calls}")
            print(f"age() calls: {self._age_calls}")
            print(f"show() calls: {self._show_calls}")

    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self._height = 0.0
        self._age = 0
        self._stats = Plant._Stats()
        self.set_height(height)
        self.set_age(age)

    @staticmethod
    def is_older_than_year(age: int) -> bool:
        return age > 365

    @classmethod
    def create_anonymous(cls) -> "Plant":
        return cls("Anonymous", 0.0, 0)

    def set_height(self, value: float) -> None:
        if value < 0:
            print(f"{self.name}: Error, height can't be negative")
        else:
            self._height = value

    def set_age(self, value: int) -> None:
        if value < 0:
            print(f"{self.name}: Error, age can't be negative")
        else:
            self._age = value

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return self._age

    def grow(self) -> None:
        self._height += 1.0
        self._stats.add_grow()

    def age(self) -> None:
        self._age += 1
        self._stats.add_age()

    def show(self) -> None:
        self._stats.add_show()
        print(f"{self.name}: {round(self._height, 1)}cm, {self._age} days old")

    def display_stats(self) -> None:
        self._stats.display()


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int, color: str) -> None:
        super().__init__(name, height, age)
        self.color = color
        self.has_bloomed = False

    def bloom(self) -> None:
        self.has_bloomed = True
        print(f"{self.name} is blooming in {self.color} color!")

    def show(self) -> None:
        super().show()
        print(f"Color: {self.color}")


class Tree(Plant):
    class _TreeStats(Plant._Stats):
        def __init__(self) -> None:
            super().__init__()
            self._shade_calls = 0

        def add_shade(self) -> None:
            self._shade_calls += 1

        def display(self) -> None:
            super().display()
            print(f"produce_shade() calls: {self._shade_calls}")

    def __init__(self, name: str, height: float, age: int, trunk_diameter: float) -> None:
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
        self._stats = Tree._TreeStats()

    def produce_shade(self) -> None:
        print(f"{self.name} is producing shade.")
        self._stats.add_shade()

    def show(self) -> None:
        super().show()
        print(f"Trunk diameter: {self.trunk_diameter}cm")


class Vegetable(Plant):
    def __init__(self, name: str, height: float, age: int,
                 harvest_season: str) -> None:
        super().__init__(name, height, age)
        self.harvest_season = harvest_season
        self.nutritional_value = 0

    def grow(self) -> None:
        super().grow()
        self.nutritional_value += 2

    def age(self) -> None:
        super().age()
        self.nutritional_value += 1

    def show(self) -> None:
        super().show()
        print(f"Harvest season: {self.harvest_season}")
        print(f"Nutritional value: {self.nutritional_value}")


class Seed(Flower):
    def __init__(self, name: str, height: float, age: int,
                 color: str, seeds_count: int = 0) -> None:
        super().__init__(name, height, age, color)
        self.seeds_count = seeds_count

    def bloom(self) -> None:
        super().bloom()
        if self.seeds_count == 0:
            self.seeds_count = 12

    def show(self) -> None:
        super().show()
        print(f"Seeds: {self.seeds_count}")


def display_plant_statistics(plant: Plant) -> None:
    print(f"=== Statistics for {plant.name} ===")
    plant.display_stats()


def main() -> None:
    print("=== Garden Analytics ===")

    anonymous = Plant.create_anonymous()
    print("Anonymous plant created:")
    anonymous.show()
    print()

    print("Is 400 days older than a year?")
    print(Plant.is_older_than_year(400))
    print()

    flower = Flower("Rose", 20.0, 30, "Red")
    tree = Tree("Oak", 150.0, 500, 35.0)
    vegetable = Vegetable("Carrot", 10.0, 20, "Winter")
    seed_flower = Seed("Sunflower", 35.0, 40, "Yellow")

    flower.grow()
    flower.age()
    flower.show()
    print()

    tree.grow()
    tree.produce_shade()
    tree.show()
    print()

    vegetable.grow()
    vegetable.age()
    vegetable.show()
    print()

    seed_flower.bloom()
    seed_flower.grow()
    seed_flower.show()
    print()

    display_plant_statistics(flower)
    print()
    display_plant_statistics(tree)
    print()
    display_plant_statistics(vegetable)
    print()
    display_plant_statistics(seed_flower)


if __name__ == "__main__":
    main()