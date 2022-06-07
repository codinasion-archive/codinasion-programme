/* 
Write a programme to find sum of cubes of first n natural numbers.
*/

function sumOfCube(num) {
  const numsArr = [...new Array(num + 1).keys()].slice(1);
  return numsArr.reduce((acc, curr) => acc + curr ** 3, 0);
}

const num = 3
console.log(`The sum of cube for ${num}: ${sumOfCube(num)}`)