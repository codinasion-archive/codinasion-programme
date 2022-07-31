# Write a programme to find volume of cone

function cone(radius, height)
  volume = radius * radius * height / 3 * π
  println(volume)
end

radius = 2
height = 3
println("Radius : ", radius)
println("Height : ", height)
print("Output : ")
cone(2, 3)
