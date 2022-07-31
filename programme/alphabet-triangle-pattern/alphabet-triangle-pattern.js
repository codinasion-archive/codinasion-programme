// Write a programme to print an alphabet triangle pattern

const alphabetTriangle = (length) => {
  // loop for each output line, starting at 0
  for (let l = 0; l < length; l++) {
    // the center character of the line is char code 65 (A) plus the current line number
    let char = 65 + l,
      str = String.fromCodePoint(char);
    // progressively add the next character in line to both sides of the previous string
    for (let c = 0; c < length - 1; c++) {
      char--;
      let newChar = char < 65 ? " " : String.fromCodePoint(char);
      str = newChar + str + newChar;
    }
    console.log(str);
  }
};

alphabetTriangle(5);
