function outputInRange()
  println("Enter start range")
  startRange = readline()
  
  println("Enter end range")
  endRange = readline()
  
  println(rand((parse(Int64, startRange)):parse(Int64, endRange))) #We use parsing in order to turn a string input into an integer because rand works only with ints
end

outputInRange()
