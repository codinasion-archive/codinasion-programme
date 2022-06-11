/* Write a program to check whether a number is even or odd

Example:
Input  : 3
Output : Odd Number

*/

const evenOrOdd = (n) => {
  return n % 2 === 0 ? 'Even Number' : 'Odd Number';
};

console.log(evenOrOdd(3));
