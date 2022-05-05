# Write a program to compute the volume of a Cylinder

import math

'''
    Author: dylan-power
    Date: 03/05/2022
'''

# Get radius and height from user
enter_radius = int(input('Radius : '))
enter_height = int(input('Height : '))

# Calculate volume
volume = enter_radius * enter_radius * enter_height * math.pi

# Print result
print("\nVolume : {:0.2f}".format((volume)))
