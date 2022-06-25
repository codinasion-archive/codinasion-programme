// Write a program to compute the volume of a Sphere

"use strict";

// perform following command to run programme
// node volume-of-sphere.js

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('Radius : ', r => {
	const v = Math.pow(Number(r), 3) * 4/3 * Math.PI;
	if (isNaN(v)) {
		console.error('Some error occured');
	} else {
		console.log(`Volume : ${v.toFixed(2).replace(/\.?0*$/,'')}`);
	}
	rl.close();
});
