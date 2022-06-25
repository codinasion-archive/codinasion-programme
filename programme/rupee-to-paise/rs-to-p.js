// Write a program to rupee to paise

"use strict";

// perform following command to run programme
// node rs-to-p.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('Input:  ', rs => {
	const p = parseFloat(rs) * 100;
	if (isNaN(p)) {
		console.error('Some error occured');
	} else {
		console.log(`Output: ${p}`);
	}
	rl.close();
});
