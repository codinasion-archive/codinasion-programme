<?php
// Write a programmethat converts radiant do degrees

function radiant_to_degrees($radiant)
{

    if (!is_numeric($radiant)) {

        return 'Invalid input: Input is not a number';

    }

    return round($radiant * (180 / pi()), 4);

}

$radiant = readline("Enter radiant value : ");

$degrees = radiant_to_degrees($radiant);

print "\nRadian : {$radiant}";
print "\nDegree : {$degrees}\n";
