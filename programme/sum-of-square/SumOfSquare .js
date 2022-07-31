// Write a programme to print sum of square of n natural number
// Check it here : https://onecompiler.com/javascript/3y5c8z56m

var readline = require("readline"); // Process to read standard input

var rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", function (N) {
  // Read N
  N = parseInt(N); // Convert the input into integer
  N = (N * (N + 1) * (2 * N + 1)) / 6; // Appy the equation
  console.log("Output :", N); // Printing the result
  rl.close();
});
