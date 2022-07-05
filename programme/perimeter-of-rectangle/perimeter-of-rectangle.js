// Write a programme to find perimeter of rectangle

"use strict";

// perform following command to run programme
// node perimeter-of-rectangle.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("length  : ", (length) => {
  rl.question("breadth : ", (breadth) => {
    const p = (parseInt(length) + parseInt(breadth)) * 2;
    if (isNaN(p)) {
      console.error("Some error occured");
    } else {
      console.log(`\nperimeter : ${p}`);
    }
    rl.close();
  });
});
