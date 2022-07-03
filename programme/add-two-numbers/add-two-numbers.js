// Write a program to add two numbers

"use strict";

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Please enter the first number   : ", (firstNumber) => {
  rl.question("Please enter the second number  : ", (secondNumber) => {
    const result = parseInt(firstNumber) + parseInt(secondNumber);
    if (isNaN(result)) {
      console.log(`You've entered non numerical values. Pls try again.`);
    } else {
      console.log(`\nThe sum of above two numbers is : ${result}`);
    }
    rl.close();
  });
});
