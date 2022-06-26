<?php

// Write a programme to find the area of circle

function calculate_area(int|float $r) {

    if (!is_numeric($r)) {

        return 'Invalid input: the input is not a number.';

    } else {

        return pi() * $r * $r;

    }

}

$r = readline("Enter radius: ");
$area = calculate_area($r);

print "\nRadius: {$r}";
print "\nArea: {$area}";

?>