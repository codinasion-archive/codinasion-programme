// Write a programme to print first n even numbers

const isEven = function (number) {
  return number % 2 === 0;
};

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (answer) => {
  process.stdout.write("Output : ");
  let counter = 0;
  let number = 0;
  while (counter < answer) {
    if (isEven(number)) {
      process.stdout.write(String(number) + " ");
      counter++;
    }
    number++;
  }
  process.stdout.write("\n");
  rl.close();
});
