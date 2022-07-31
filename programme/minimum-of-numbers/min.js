// Write a programmeto print the minimum of given numbers

"use strict";

// perform following command to run programme
// node min.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (nums) => {
  nums = nums.split(" ").map(Number);
  console.log(`Output : ${Math.min(...nums)}`);
  rl.close();
});
