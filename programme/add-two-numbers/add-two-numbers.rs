use std::io;

fn main() {
    // Read user input
    println!("Enter first number: ");
    let mut first_number = String::new();
    io::stdin()
        .read_line(&mut first_number)
        .expect("Unable to read entered data");

    // Read user input
    println!("Enter second number: ");
    let mut second_number = String::new();
    io::stdin()
        .read_line(&mut second_number)
        .expect("Unable to read entered data");

    // Convert string to integer
    let a: f32 = first_number
        .trim()
        .parse()
        .ok()
        .expect("Program only processes numbers, Enter number");
    let b: f32 = second_number
        .trim()
        .parse()
        .ok()
        .expect("Program only processes numbers, Enter number");

    let sum = a + b;
    // Output of basic operations
    println!("{} + {} = {}", a, b, sum);
}
