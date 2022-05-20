// Write a program to divide two given numbers

function divide(a, b) {
  return (a / b).toFixed(2);
}

let num1 = prompt("Enter First Number : ");
let num2 = prompt("Enter Second Number : ");

console.log("Output :", divide(num1, num2));
