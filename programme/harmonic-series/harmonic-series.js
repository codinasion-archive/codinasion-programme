// Write a programme to calculate the sum of following harmonic series for a given value of n

// Additional information
// 1 + 1/2 + 1/3 + 1/4 + ... + 1/n

function sum(n) {
  //   set variables so we start with "1" and add "1/2", so s starts at 0 and i starts at 1 in the for loop.
  var i,
    s = 0.0;

  for (i = 1; i <= n; i++) s = s + 1 / i;

  // Once i <= the argument passed in for 'n', we return the final sum, 's'
  return s.toFixed(2);
}

// Examples:
// n=6
sum(6); // 2.4499999999999997

// n=18	
// sum(18)   // 3.4951080781963135
