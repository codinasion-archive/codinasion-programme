

function isPangram(input){
    const alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    const letters = {}
    let pangram = true

    //add an entry on "letters" object for every character in input
    for(let i=0; i<input.length; i++){
        //convert the read character to lowercase
        char = input.charAt(i).toLowerCase()
        letters[char] = true
    }

    //iterate through the object for every letter in alphabet
    alphabet.forEach( letter => {
        //if the letter is not inside of the "letters" object then set pangram to false
        if(!letters[letter]){
            pangram = false
        }
    })

    return pangram
}