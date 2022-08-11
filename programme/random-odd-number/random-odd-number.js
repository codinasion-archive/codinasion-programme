// Write a programme to generate a random odd number in range n1-n2

function randomOddNumber(n1, n2){
    let number = Math.floor(Math.random() * (n1 - n2 + 1)) + n2;

    while (number%2===0){
        number = Math.floor(Math.random() * (n1 - n2 + 1)) + n2;
    }

    return number;
}

const n1 = 0;
const n2 = 100;

console.log("Start Range: ", n1);
console.log("End Range:   ", n2);

console.log("Odd Number:  ", randomOddNumber(n1, n2));