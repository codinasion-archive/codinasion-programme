// Write a programme to check a valid email address

function isValidEmail(email) {
    const re = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;
    if (email.match(re)) {
      return true;
    }
    return false;
  }
  
  const email = "test@gmail.com";
  
  console.log("Input  :", email);
  console.log("Output :", isValidEmail(email) ? "valid" : "invalid");
  