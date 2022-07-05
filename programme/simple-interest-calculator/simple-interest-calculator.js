// Write a programme to calculate simple interest

"use strict";

// perform following command to run programme
// node simple-interest-calculator.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter P : ", (p) => {
  rl.question("Enter T : ", (t) => {
    rl.question("Enter R : ", (r) => {
      const si = (parseInt(p) * parseInt(t) * parseInt(r)) / 100;
      if (isNaN(si)) {
        console.error("Some error occured");
      } else {
        console.log(`\nSimple Interest : ${si}`);
      }
      rl.close();
    });
  });
});
