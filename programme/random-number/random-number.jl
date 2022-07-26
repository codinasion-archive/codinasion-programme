function output_in_range()
  println("Enter start range")
  start_range = readline()
  
  println("Enter end range")
  end_range = readline()
  
  println(rand((parse(Int64, start_range)):parse(Int64, end_range))) #We use parsing in order to turn a string input into an integer because rand works only with ints
end

output_in_range()
