class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self.height = height
        self.age_days = age

    def grow(self) -> None:
        self.height += 0.8

    def age(self) -> None:
        self.age_days += 1

    def show(self) -> None:
        print(
            f"{self.name}: {round(self.height, 1)}cm, "
            f"{self.age_days} days old"
            )


def main() -> None:
    plant = Plant("Rose", 25.0, 30)
    initial_height = plant.height

    print("=== Garden Plant Growth ===")

    for day in range(1, 8):
        print(f"=== Day {day} ===")
        plant.show()
        plant.grow()
        plant.age()

    growth = round(plant.height - initial_height)
    print(f"Growth this week: {growth}cm")


if __name__ == "__main__":
    main()
