# * Author: Arislanbek Kalbaev
# * Date: October 25, 2023

#Task 3
import random

A = int(input("Enter number A: "))

random_num = ''.join(str(random.randint(0, 9)) for _ in range(100))

result = int(random_num) // A

print(f"Random 100-digit number: {random_num}")
print(f"Result of dividing random number by A: {result}")




#Task 5
class Game:
    def __init__(self):
        self.enemies = []

    def spawn_enemy(self, x, y):
        self.enemies.append((x, y))

    def check_collision(self, x, y):
        for enemy_x, enemy_y in self.enemies:
            if enemy_x == x and enemy_y == y:
                return True
        return False


def main():
    game = Game()

    N = int(input("Enter the number of coordinates: "))

    for _ in range(N):
        x, y = map(int, input("Enter x and y coordinates: ").split())

        game.spawn_enemy(x, y)

        if game.check_collision(x, y):
            print("Character is dead!")
            break
        else:
            print("Character survived! Wow!")


if __name__ == "__main__":
    main()
