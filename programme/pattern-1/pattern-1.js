// Write a program to print the given pattern
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

"use strict";

// perform following command to run programme
// node pattern-1.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function pattern(n) {
  for (let i = 0; i < n; i++) {
    console.log(
      Array(n - i)
        .fill("*")
        .join(" ")
        .padStart(2 * n - 1)
    );
  }
}

rl.question("Input  : ", (n) => {
  console.log("Output :");
  n = parseInt(n);
  if (isNaN(n)) {
    console.error("Some error occured");
  } else {
    pattern(n);
  }
  rl.close();
});
