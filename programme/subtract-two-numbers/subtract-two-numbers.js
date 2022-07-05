// Write a programme to subtract two numbers

"use strict";

// perform following command to run programme
// node subtract-two-numbers.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (nums) => {
  let [x, y] = nums.split(" ").map(Number);
  if (isNaN(x) || isNaN(y)) {
    console.error("Some error occured");
  } else {
    console.log(`Òutput : ${x - y}`);
  }
  rl.close();
});
