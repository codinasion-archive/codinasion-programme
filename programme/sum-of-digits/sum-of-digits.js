/* 
Write a programmeto print sum of digits.
*/

function sumDigits(nums) {
  const arr = [...`${nums}`];
  return arr.reduce((acc, curr) => acc + Number(curr), 0);
}

const digits = 2332;
console.log("Input  :", digits);
console.log("Output :", sumDigits(digits));
