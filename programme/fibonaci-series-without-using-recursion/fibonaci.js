// Write a programmeto print Fibonacci series without recursion

"use strict";

// perform following command to run programme
// node fibonaci.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (n) => {
  n = Number(n);
  let [a, b] = [0, 1];
  if (isNaN(n)) {
    console.log("Some error occured");
  } else {
    rl.write("Output :");
    for (let i = 0; i < n; i++) {
      rl.write(` ${a}`);
      let tmp = a;
      a = b;
      b = tmp + b;
    }
    console.log();
  }
  rl.close();
});
