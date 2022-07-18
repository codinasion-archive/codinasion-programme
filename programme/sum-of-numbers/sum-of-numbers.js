// Write a programme to find the sum of n numbers

const input = "1 2 3 4";

function sumOfNumbers(numbers) {
  let sum = 0;
  for (let i of numbers.split(" ")) {
    sum += +i;
  }
  return sum;
}

console.log("Input  :", input);
console.log("Sum    :", sumOfNumbers(input));
