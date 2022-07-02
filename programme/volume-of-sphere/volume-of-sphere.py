# Write a program to compute the volume of a Sphere
import math

'''
    Author: aashish-khub
    Date: 07/05/2022
'''

# Get radius from user
enter_radius = int(input('Radius : '))

# Calculate volume
volume = enter_radius * enter_radius * enter_radius * 4/3 * math.pi

# Print result
print("\nVolume : {:0.2f}".format((volume)))
