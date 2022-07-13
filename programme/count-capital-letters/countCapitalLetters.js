// Write a programme to count capital letters in a string

function Capital(str) {
  let count = 0;
  for (let i = 0; i <= str.length - 1; i++) {
    if (str[i] === str[i].toUpperCase()) {
      count += 1;
    }
  }
  return count;
}

const str = "HiiThere";
console.log("Input  : " + str);
console.log("Output : " + Capital(str));
