# Write a program to compute the volume of a Cylinder

function cylinder(radius, height)
  volume = radius * radius * height * π
  println(volume)
end

radius = 8
height = 10
println("Radius : ", radius)
println("Height : ", height)
print("Output : ")
cylinder(8, 10)
