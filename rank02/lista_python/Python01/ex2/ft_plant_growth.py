class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self.height = height
        self.age = age

    def grow(self) -> None:
        self.height += 0.8

    def age_up(self) -> None:
        self.age += 1

    def show(self) -> None:
        print(f"{self.name}: {round(self.height, 1)}cm, {self.age} days old")


def main() -> None:
    plant = Plant("Rose", 25.0, 30)
    initial_height = plant.height

    print("=== Garden Plant Growth ===")

    for day in range(1, 8):
        print(f"=== Day {day} ===")
        plant.grow()
        plant.age_up()
        plant.show()

    growth = round(plant.height - initial_height)
    print(f"Growth this week: {growth}cm")


if __name__ == "__main__":
    main()