# Write a programme to count capital letters in a string

function capitals()
  counter = 0
  print("Input  : ")
  input = readline()
  for character in input
    if all(isuppercase, character)
      counter = counter + 1
    end
  end
  println("Output : ", counter)
end

capitals()
