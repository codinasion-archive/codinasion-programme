// Write a programme to find the area of circle
const areaOfCircle = function areaOfCircle(r) {
	return Math.PI * r * r;
};

const readline = require("readline");
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout,
});

rl.question("Enter radius : ", (userInput) => {
	const r = Number.parseFloat(userInput);
	if (!isNaN(r)) {
		area = areaOfCircle(r);
		console.log("\nArea : ", area.toPrecision(4));
		rl.close();
	} else {
		console.log("Invalid input: the input is not a number.");
		rl.close();
	}
});
