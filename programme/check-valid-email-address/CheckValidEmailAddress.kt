// Write a programme to check a valid email address
import kotlin.text.Regex

fun isValidEmail(emailAddress: String): Boolean {
    val pattern =
        Regex("^[A-Z](?:[A-Z\\d]|[-_.](?=[A-Z\\d]))+@[-A-Z\\d.]+\\.[A-Z]{2,}$", RegexOption.IGNORE_CASE)
    return pattern.matches(emailAddress)
}

fun main() {
    print("Please, insert the email address to validate: ")
    val emailAddress = readln()
    if (isValidEmail(emailAddress)) {
        println("The email address provided is valid.")
    } else {
        println("The email address provided is invalid.")
    }
}