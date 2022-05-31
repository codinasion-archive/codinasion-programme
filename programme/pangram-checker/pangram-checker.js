

function isPangram(input){
    const alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    const letters = {}
    let pangram = true

    //we add an entry on "letters" object for every character in input
    for(let i=0; i<input.length; i++){
        //the read character is converted to lowercase
        char = input.charAt(i).toLowerCase()
        letters[char] = true
    }

    //we iterate through the object for every letter in alphabet
    alphabet.forEach( letter => {
        //if the letter is not inside of the "letters" object we set pangram to false
        if(!letters[letter]){
            pangram = false
        }
    })

    return pangram
}