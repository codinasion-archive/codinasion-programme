/* Write a programme to print the Fibonacci pattern

Example:
Input: n = 5
Output:
1
1 1
1 1 2
1 1 2 3
1 1 2 3 5
*/

const printFibs = (n) => {
  let str = "";
  let a = 1;
  let b = 1;
  for (let i = 0; i < n; i++) {
    str += `${a} `;
    console.log(str);
    [a, b] = [b, a + b];
  }
};

printFibs(5);
