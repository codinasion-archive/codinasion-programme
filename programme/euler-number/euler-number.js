//Javascript program to compute
// sum of series 1/1! + 1/2! + .. + 1/n!

// function calculating the factorials for the sum of series calculated in the following function
const factorial = (n) => {
  let r = 1;
  for (let i = 2; i <= n; i++) r *= i;
  return r;
};

// `sum` is a lot like function for the "harmonic series" solution, but here on line 17 we call the function 'factorial' in the denominator as needed.
const sum = (n) => {
  let s = 0;
  for (let i = 1; i <= n; i++) s += 1.0 / factorial(i);
  return s;
};

console.log("n : 3");
console.log("\nsum : ", sum(3).toFixed(2));
