import random

print("--------------------------------------------")
print("---------- WELCOME TO DICE ROLLER ----------")
print("--------------------------------------------")
print("\n")
print("INSTRUCTIONS: \n1- To roll a dice input 'd' followed by the number of sides of your die.")
print("For example, if you want to roll a 20-sides die, type D20 and hit 'Enter'.\n")

while True:
    dice = input("Dice: ")
    dice_faces = dice.lower().split('d')[-1]
    
    try:
        roll = random.randint(1, int(dice_faces))
    except:
        print("\nERROR: Invalid DICE number. Try again using the template 'D' followed by the numer of faces, such as 'D20' or 'D6'.\n")
        continue
    print("\nYou rolled a {}.".format(roll))
