/* 
Write a programme to calculate the average of numbers.
*/

function avgOfNumbers(nums) {
  const len = nums.length;
  return nums.reduce((acc, curr) => acc + Number(curr), 0) / len;
}

const nums = [2, 3, 4];
console.log('Input:', nums);
console.log('Output:', avgOfNumbers(nums));