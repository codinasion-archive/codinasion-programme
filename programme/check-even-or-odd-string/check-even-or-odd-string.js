// Write a programme to check even or odd string

function checkEven(input) {
  return input.length % 2 == 0 ? "Even String" : "Odd String";
}

const first = "hiithere";
console.log("Input  : " + first);
console.log("Output : " + checkEven(first));
