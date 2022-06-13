<?php
# Array element slice function

$array_list = array('abcd', 'efgh', 'ijklmn','opq','rstuvw','xyz');
print_r($array_list);

# function arguments (arrayList) (start slice from -number) (end slice with -number)
function arrayLetterRange($a_list, $start=1, $end=2){

    // store slice value in result
    $result = array();
    for ($i=0; $i < sizeof($a_list); $i++) { 
        $sliced_val = substr($a_list[$i], $start-1, $end);

        // check slice value if not empty 
        if ($sliced_val != '') {
            array_push($result, $sliced_val);
        }
    }
    return $result;
}


// call the function
$array_result = arrayLetterRange($array_list, 2,4);
print_r($array_result);

?>
