// Write a programme to convert years to days

"use strict";

// perform following command to run programme
// node x-power-y.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('Input : ', years => {
	const fyears = parseFloat(years);
	if (isNaN(fyears)) {
		console.error('Some error occured');
	} else {
		console.log(`Output : ${fyears * 365}`);
	}
	rl.close();
});
