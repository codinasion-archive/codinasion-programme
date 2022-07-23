// Write a program to add two numbers
use std::io::{self, Write};

fn main() {
    // Read user input
    print!("Enter first number  : ");
    let mut first_number = String::new();
    let _ = io::stdout().flush();
    io::stdin()
        .read_line(&mut first_number)
        .expect("Unable to read entered data");

    // Read user input
    print!("Enter second number : ");
    let mut second_number = String::new();
    let _ = io::stdout().flush();
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
    println!("\n{} + {} = {}", a, b, sum);
}
