// This file contains the JavaScript code for the SBI login page.
// It handles form validation, submission events, and interactive features.

document.addEventListener('DOMContentLoaded', function() {
    const form = document.getElementById('loginForm');
    const userIdInput = document.getElementById('userId');
    const passwordInput = document.getElementById('password');
    const submitButton = document.getElementById('submitButton');

    // Function to validate the form
    function validateForm() {
        const userId = userIdInput.value.trim();
        const password = passwordInput.value.trim();

        if (userId === '' || password === '') {
            alert('Please fill in both fields.');
            return false;
        }
        return true;
    }

    // Event listener for form submission
    form.addEventListener('submit', function(event) {
        event.preventDefault(); // Prevent the default form submission

        if (validateForm()) {
            // Here you can add the logic to handle the login, e.g., sending data to the server
            alert('Login successful!');
        }
    });

    // Function to toggle password visibility
    const togglePasswordVisibility = () => {
        const type = passwordInput.type === 'password' ? 'text' : 'password';
        passwordInput.type = type;
    };

    // Event listener for the password visibility toggle
    document.getElementById('togglePassword').addEventListener('click', togglePasswordVisibility);
});