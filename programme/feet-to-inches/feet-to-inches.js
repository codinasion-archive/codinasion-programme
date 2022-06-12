// Write a programme to convert feet to inches
// Execute: node inches-to-feet.js

"use strict"

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (inches) => {
	const result = parseInt(inches) * 12;
	if (!isNaN(result)) {
		console.log(`Output : ${result}`)
	} else {
		console.log("An Error occured");
	}
	rl.close();
});
