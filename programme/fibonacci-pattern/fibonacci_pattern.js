const printFibs = (n) => {
  let str = '';
  let a = 1;
  let b = 1;
  for (let i = 0; i < n; i++) {
    str += `${a} `;
    console.log(str);
    [a, b] = [b, a + b];
  }
};

printFibs(5);
