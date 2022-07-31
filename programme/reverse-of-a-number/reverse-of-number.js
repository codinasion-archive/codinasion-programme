// Write a programmeto print reverse of a number

"use strict";

// perform following command to run programme
// node reverse-of-a-number.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (num) => {
  num = parseInt(num.split("").reverse().join(""));
  if (isNaN(num)) {
    console.error("Some error occured");
  } else {
    console.log(`Output : ${num}`);
  }
  rl.close();
});
