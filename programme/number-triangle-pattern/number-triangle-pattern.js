// Write a programmeto print number triangle pattern

"use strict";

// perform following command to run programme
// node number-triangle-pattern.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (n) => {
  n = Number(n);
  if (isNaN(n)) {
    console.log("Some error occured");
  } else {
    console.log("Output : ");
    for (let i = 1; i <= n; i++) {
      let s = "";
      for (let j = i; j > 0; j--) {
        s += (i - j + 1).toString();
      }
      let rs = s.split("").reverse().join("").slice(1, s.length);
      console.log((s + rs).padStart(n + i - 1));
    }
  }
  rl.close();
});
