// Write a program to print Fibonacci pattern

const fibonacciPattern = function (n) {
    let a = 0;
    let b = 1;
    for (let i = 0; i < n; i++) {
        process.stdout.write(`${b} `);
        [a, b] = [b, a + b];
    }
    process.stdout.write("\n");
}

const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter the lenght of the Fibonacci pattern to generate : ", (patternLength) => {
    for (let number = 1; number <= patternLength; number++) {
        fibonacciPattern(number)
    }
    rl.close();
});