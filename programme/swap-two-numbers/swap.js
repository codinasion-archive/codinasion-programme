// Write a programmeto swap two numbers

"use strict";

// perform following command to run programme
// node swap.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter a : ", (a) => {
  rl.question("Enter b : ", (b) => {
    [a, b] = [a, b].map(Number);
    if (isNaN(a) || isNaN(b)) {
      console.log("Some error occured");
    } else {
      let tmp = b;
      b = a;
      a = tmp;
      console.log(`\nOutput:\na = ${a}\nb = ${b}`);
    }
    rl.close();
  });
});
