<?php
// Write a programme to find the area of circle

function calculate_area(int | float $r)
{

    if (!is_numeric($r)) {

        return 'Invalid input: the input is not a number.';
    } else {
        return pi() * $r * $r;
    }
}

$r = readline("Enter radius : ");

$area = round(calculate_area($r), 2);
print "\nRadius : {$r}";
print "\nArea   : {$area}\n";
