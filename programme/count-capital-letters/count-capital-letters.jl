function capitals()
  counter = 0
  input = readlines()
  for character in input
    if all(isuppercase, character)
      
      counter = counter + 1
    end
  end
  print(counter)
end

capitals()
