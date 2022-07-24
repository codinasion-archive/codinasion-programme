// Write a programme to generate a random number in range n1, n2

const n1 = 1;
const n2 = 100;

function getRandomNumberBetween(n1, n2) {
  return Math.floor(Math.random() * (n2 - n1 + 1) + n1);
}

console.log("Start range   :", n1);
console.log("End   range   :", n2);
console.log("Random number :", getRandomNumberBetween(n1, n2));
