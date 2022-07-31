/*
Write a programmeto print Fibonacci series using recursion.

Example:
Input: n = 10.
Output: 0 1 1 2 3 5 8 13 21 34
*/

const fib = (n) => {
  if (n === 0) return 0;
  if (n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
};

const printFibs = (n) => {
  let str = "";
  for (let i = 0; i < n; i++) {
    str += `${fib(i)} `;
  }
  console.log(str);
};

printFibs(10);
