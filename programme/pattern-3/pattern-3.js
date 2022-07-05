// Write a python programme to print the given pattern

"use strict";

// perform following command to run programme
// node pattern-3.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function pattern(n) {
  for (let i = 0; i < n - 1; i++) {
    rl.write("x ");
  }
  rl.write("x\n");
  for (let i = 0; i < n - 2; i++) {
    rl.write("x");
    for (let i = 0; i < n - 2; i++) {
      rl.write("  ");
    }
    rl.write(" x\n");
  }
  if (n != 1) {
    for (let i = 0; i < n - 1; i++) {
      rl.write("x ");
    }
    rl.write("x\n");
  }
}

rl.question("Input  : ", (n) => {
  console.log("Output :\n");
  n = parseInt(n);
  if (isNaN(n)) {
    console.error("Some error occured");
  } else {
    pattern(n);
  }
  rl.close();
});
