<!-- Write a programme to multiply two numbers -->

<?php

    // $a = 'try string';
    $a = 8;
    $b = 5;
    
    function multiply ($n1, $n2){
        $n1_type = gettype($n1) === 'integer';
        $n2_type = gettype($n2) === 'integer';
        
        if ($n1_type && $n2_type) {
            // echo "Multiply: ", ($n1*$n2);
            return ($n1*$n2);
        }
        else{
            // echo "Invalid inputs";
            return "Invalid inputs";
        }  
    }

    $multi = multiply($a, $b);
    echo $multi;
    
?>