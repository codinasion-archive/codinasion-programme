// Write a program to check armstrong number

const countDigits = function (number) {
  let numberOfDigits = 0;
  while (number > 0) {
    number = Math.floor(number / 10);
    numberOfDigits++;
  }
  return numberOfDigits;
};

const requiredSum = function (number) {
  const numberOfDigits = countDigits(number);
  let sum = 0;
  while (number > 0) {
    digit = number % 10;
    number = Math.floor(number / 10);
    sum += Math.pow(digit, numberOfDigits);
  }
  return sum;
};

const isArmstrong = function (number) {
  const sum = requiredSum(number);
  return number === sum;
};

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter an integer : ", (userInput) => {
  console.log(`\nInput  : ${userInput}`);
  const num = Number.parseInt(userInput);
  if (!isNaN(num)) {
    answer = isArmstrong(num)
      ? "Output : armstrong number"
      : "Output : not an armstrong number";
    console.log(answer);
    rl.close();
  } else {
    console.log("Invalid input: the input is not a number.");
    rl.close();
  }
});
