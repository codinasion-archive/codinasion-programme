// Write a programme to find perimeter of square

"use strict";

// perform following command to run programme
// node perimeter-of-square.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('side : ', n => {
	const p = parseInt(n) * 4;
	if (isNaN(p)) {
		console.error('Some error occured');
	} else {
		console.log(`perimeter : ${p}`);
	}
	rl.close();
});
