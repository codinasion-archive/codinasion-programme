/*
Write a programmeto check if a number is a prime

Example:
Input: n = 8
Output: Not a prime number.

Example:
Input: n = 7
Output: Prime number
*/

const isPrime = (n) => {
  // edge cases: 1 and 0 are not prime
  if (n <= 1) return false;
  // n is a prime if n is not evenly divisible by any integer from 2 to the square root of n
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i === 0) return false;
  }
  return true;
};

const printIsPrime = (n) => {
  console.log(isPrime(n) ? "Prime number" : "Not a prime number");
};

printIsPrime(7);
