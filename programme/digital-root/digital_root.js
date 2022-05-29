// Write a programme for Digital Root of a number

function digital_root(n) {
  if (n === 0) {
    return 0;
  } else {
    return 1 + ((n - 1) % 9);
  }
}

let num = prompt("Enter Number : ");
console.log("Digital Root :", digital_root(num));
