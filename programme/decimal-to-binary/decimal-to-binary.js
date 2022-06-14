// Write a programme to convert decimal number to binary.
// Assumes output as binanry number
// Intput: 5
// Output: 101

function decimalToBinary(number) {
  return +number.toString(2);
}

const dnum = 5;
console.log("Input  :", dnum);
console.log("Output :", decimalToBinary(dnum));
