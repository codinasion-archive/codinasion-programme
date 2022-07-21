// Write a programme to generate a random even number in range n1-n2

function generateRandomEvenNumber(n1, n2){
  while (true){
    let randomNumber = Math.floor(Math.random() * (n2 - n1 + 1)) + n1;
    if (randomNumber % 2 == 0){
        return randomNumber;
    }
  }
}

const range_start = 0;
const range_end = 100;

console.log("Start range :", range_start);
console.log("End   range :", range_end);

console.log("Random even number :", generateRandomEvenNumber(range_start, range_end));