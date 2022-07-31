// Write a programmeto find the factorial of a number

function factorial(num) {
  if (num === 1) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

var num = 5;

console.log(factorial(num));
