const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question("Input  : ", (inputString) => {
    console.log("Output :", inputString.length);
    rl.close();
});