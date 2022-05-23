function sum(n) {
  var i, s = 0.0;
  for (i = 1; i <= n; i++)
    s = s + 1 / i;
  return s;
}

// Examples:
sum(6)    // 2.4499999999999997
sum(18)   // 3.4951080781963135
