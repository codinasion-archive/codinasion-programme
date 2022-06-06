/*
Write a program to print the given pattern:

for n = 3:

  *
 * *
* * *
 * *
  *

*/

const printPatternTwo = (n) => {
  for (let i = 1; i < n * 2; i++) {
    let stars = i <= n ? i : n * 2 - i;
    let offsetSpaces = n - stars;
    console.log(" ".repeat(offsetSpaces) + "* ".repeat(stars));
  }
};

printPatternTwo(3);
