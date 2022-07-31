# Write a programme to compute the volume of a Cone
import math


# Get radius from user
enter_radius = float(input('Radius : '))

# Get height from user
enter_height = float(input('Height : '))

# Calculate volume
volume = 1/3 * math.pi * (enter_radius)**2 * enter_height

# Print result
print("\nVolume : {:0.2f}".format((volume)))
