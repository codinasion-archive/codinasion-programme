const year = Number(prompt('Input year : '));

year % 4 === 0 && (year % 400 === 0 || year % 100 !== 0)
  ? console.log('leap year')
  : console.log('not leap year');
