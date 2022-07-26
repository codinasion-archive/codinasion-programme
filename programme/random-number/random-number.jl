# Write a programme to generate a random number in range n1-n2
function output_in_range()
  print("Enter start range : ")
  start_range = readline()

  print("Enter end   range : ")
  end_range = readline()

  println("\nOutput : ", rand((parse(Int64, start_range)):parse(Int64, end_range))) #We use parsing in order to turn a string input into an integer because rand works only with ints
end

output_in_range()
