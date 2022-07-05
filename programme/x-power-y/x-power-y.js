// Write a program to find X power Y

"use strict";

// perform following command to run programme
// node x-power-y.js

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
    console.log(`Òutput : ${Math.pow(x, y)}`);
  }
  rl.close();
});
