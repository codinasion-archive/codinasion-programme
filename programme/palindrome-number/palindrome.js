// Write a programmeto check palindrome number

const reverseInt = function (n) {
  let remainder,
    reverse = 0;
  while (n > 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = Math.floor(n / 10);
  }
  return reverse;
};

const isPalindrome = function (n) {
  if (n < 0) {
    return false;
  }
  if (n < 10) {
    return true;
  }
  return reverseInt(n) == n;
};

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (n) => {
  if (isPalindrome(n)) {
    console.log("Output : Palindrome number");
    rl.close();
  } else {
    console.log("Output : Not palindrome number");
    rl.close();
  }
});
