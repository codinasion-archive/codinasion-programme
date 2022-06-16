/* 
Write a program that:

- Takes the length of two bases and height
- Uses the formula to calculate the area
- Return the area

Area of a trapezoid = ( base 1 + base 2 ) * height / 2
*/

function areaTrapezoid(base1, base2, height) {
  return ((base1 + base2) * height) / 2;
}

const base1 = 5;
const base2 = 10;
const height = 7;
console.log("Input  :", base1, base2, height);
console.log("Output :", areaTrapezoid(base1, base2, height));