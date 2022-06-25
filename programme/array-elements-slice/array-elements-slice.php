<?php
// Write a programme to generate new array with sliced elements of old array

// define array
$array_list = ['abcd', 'efgh', 'ijklmn', 'opq', 'rstuvw', 'xyz'];
print 'Array : ' . json_encode($array_list);

# function arguments (arrayList) (start slice from -number) (end slice with -number)
function arrayLetterRange($a_list, $start = 1, $end = 2)
{
    // store slice value in result
    $result = [];
    for ($i = 0; $i < sizeof($a_list); $i++) {
        $sliced_val = substr($a_list[$i], $start - 1, $end);

        // check slice value if not empty
        if ($sliced_val != '') {
            array_push($result, $sliced_val);
        }
    }
    return $result;
}

// define range
$start = 2;
$end = 3;
print "\nStart : $start";
print "\nEnd   : $end";

// call the function
$array_result = arrayLetterRange($array_list, $start, $end);
print "\n\nSliced Array : " . json_encode($array_result);
print "\n";

?>
