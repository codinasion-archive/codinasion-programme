<?php
ini_set('display_errors', true);
error_reporting(E_ALL);
// Write a PHP program to print out an alphabet triangle pattern

function alpha_triangle(int $length) {
  // loop for each output line, starting at 0
  for ($l = 0; $l < $length; $l++) {
    // the center character of the line is char code 65 (A) plus the current line number
    $char = 65 + $l;
    $str = chr($char);
    // progressively add the next character in line to both sides of the previous string
    for ($c = 0; $c < $length - 1; $c++) {
      $char--;
      $new_char = $char < 65 ? " " : chr($char);
      $str = $new_char . $str . $new_char;
    }
    print "\n$str";
  }
}

alpha_triangle(3);

?>