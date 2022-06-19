"use strict";
// Write a programme to convert minutes to seconds
// node .\minutes-to-seconds.js

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter minutes : ", (minutes) => {
  const seconds = minutes * 60;
  if (!isNaN(seconds)) {
    console.log(`${minutes} minute(s) is equal to ${seconds} second(s).`);
  } else {
    console.log("Invalid input: the input is not a number.");
  }
  rl.close();
});
