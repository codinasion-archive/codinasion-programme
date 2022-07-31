// Write a programmeto output the multiplication table

"use strict";

// perform following command to run programme
// node table.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function table_of(n) {
  for (let i = 1; i <= 10; i++) {
    console.log(`${i} x ${n} = ${i * n}`);
  }
}

rl.question("Input  : ", (n) => {
  console.log("Output : ");
  n = parseInt(n);
  if (isNaN(n)) {
    console.error("Some error occured");
  } else {
    table_of(n);
  }
  rl.close();
});
