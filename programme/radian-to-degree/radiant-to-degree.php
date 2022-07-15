<?php
// Write a program that converts radiant do degrees

function radiant_to_degrees($radiant)
{

    if (!is_numeric($radiant)) {

        return 'Invalid input: Input is not a number';

    }

    return $radiant * (180 / pi());

}

$radiant = readline("Enter radiant value  : ");

$degrees = radiant_to_degrees($radiant);

print "\nRadiant : {$radiant}";
print "\nDegrees : {$degrees}\n";
