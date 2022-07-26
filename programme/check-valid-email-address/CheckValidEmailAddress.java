// Write a programme to check a valid email address

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class CheckValidEmailAddress {

    public static boolean isValidEmail(String emailAddress) {
        Pattern pattern = Pattern.compile("^[A-Z](?:[A-Z\\d]|[-_.](?=[A-Z\\d]))+@[-A-Z\\d.]+\\.[A-Z]{2,}$", Pattern.CASE_INSENSITIVE);
        Matcher matcher = pattern.matcher(emailAddress);
        return matcher.find();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Please, insert the email address to validate: ");
        String emailAddress = scanner.nextLine();

        if (isValidEmail(emailAddress)) {
            System.out.println("The email address provided is valid.");
        } else {
            System.out.println("The email address provided is invalid.");
        }

    }

}
