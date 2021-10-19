# -*- coding: utf-8 -*-
# Wizard() takes no arguments
# Wizard()는 인자를 받지 않는데 1개가 들어갔다.
class Wizard():
    def __init__(self, health, mana, armor):
        self.health=health
        self.mana=mana
        self.armor=armor
    def attack(self):
        print("fireball")

x = Wizard(health = 545, mana = 210, armor = 10)
print(x.health, x.mana, x.armor)
x.attack()