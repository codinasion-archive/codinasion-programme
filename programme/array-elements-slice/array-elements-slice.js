// Array element slice function

array_list = ['abcd', 'efgh', 'ijklmn','opq','rstuvw','xyz']
// console.log(array_list)

// function arguments (arrayList) (start slice from -number) (end slice with -number)
function arrayLetterRange(a_list, start=0, end=2){
    
    // store slice value in result
    let result = []
    for (let i = 0; i < a_list.length; i++) {
        const element = a_list[i];    
        let sliced_val = element.slice(start-1,end)

        // check slice value if not empty 
        if(sliced_val != ''){
            result.push(sliced_val)
        }
    }
    return result
}


// call the function
let array_result = arrayLetterRange(array_list, 2,5)
console.log(val)

